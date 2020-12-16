//
// Created by steam.hyperpolyglot on 16/12/2020.
//

#ifndef QUEUE_H
#define QUEUE_H

#include <memory>

using namespace std;

template < class T >
class Queue {
public:
	Queue () { init (); }
	
	Queue(const Queue &q) {
		init(q.front(), q.back());
	}
	
	explicit Queue ( size_t numElements, const T &initialValue = T ()) {
		init ( numElements, initialValue );
	}
	
	~Queue () { destroy (); }
	
	T *front () { return queueData; }
	
	const T *front() const { return queueData; }
	
	T *back () { return queueDataEnd - 1; }
	
	const T *back () const { return queueDataEnd - 1; }
	
	size_t size () const { return queueDataEnd - queueData; }
	
	bool empty () const { return size () == 0; }
	
	void resize() {
		size_t newSize = max(2 * (queueDataEnd - queueData), ptrdiff_t(1));
		T *newData = alloc.allocate(newSize);
		T *newDataEnd = uninitialized_copy(queueData, queueDataEnd, newData);
		destroy();
		queueData = newData;
		queueDataEnd = newDataEnd;
		memLimit = queueData + newSize;
	}
	
	void append (const T &newValue) {
		alloc.construct(queueDataEnd++, newValue);
	}
	
	void pop() {
		if (queueData != 0) {
			alloc.destroy(queueData);
			for (int i = 0; i < size(); i++) {
				queueData[i] = queueData[i + 1];
			}
			
			queueDataEnd -= 1;
		}
	}
	
	void push(const T &element) {
		if (queueDataEnd == memLimit)
			resize();
		append(element);
	}
	
	void init(T *front, T *back) {
		queueData = alloc.allocate(back - front);
		memLimit = queueDataEnd = uninitialized_copy(front, back, queueData);
	}
	
	Queue &operator=(const Queue &rhs) {
		if (&rhs != this) {
			destroy();
			init(rhs.front(), rhs.back());
		}
		return *this;
	}

private:
	void init () {
		queueData = queueDataEnd = memLimit = 0;
	}
	
	void init ( size_t numElements, const T &initialValue ) {
		queueData = alloc.allocate(numElements);
		queueDataEnd = memLimit = queueData + numElements;
		uninitialized_fill(queueData, queueDataEnd, initialValue);
	}
	
	void destroy () {
		if (queueData != 0) {
			T *it = queueDataEnd;
			while (it != queueData) {
				alloc.destroy(--it);
			}
			alloc.deallocate(queueData, memLimit - queueData);
		}
		
		queueData = queueDataEnd = memLimit = 0;
	}
	
	// the allocator object
	allocator<T> alloc;
	
	T *queueData;
	T *queueDataEnd;
	T *memLimit;    // one past the end of allocated memory
};

#endif //QUEUE_H
