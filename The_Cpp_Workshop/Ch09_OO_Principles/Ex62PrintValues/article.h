//
// Created by steam.hyperpolyglot on 13/12/2020.
//

#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>
#include "valueprinter.h"
using namespace std;

class Article {
public:
	Article(string title, int pageCount, int wordCount, string author) {
		m_title = title;
		m_pageCount = pageCount;
		m_wordCount = wordCount;
		m_author = author;
	}
	
	string m_title;
	int m_pageCount;
	int m_wordCount;
	string m_author;
	ValuePrinter valuePrinter;
	
	void ShowDetails() {
		valuePrinter.Print("Article Title", m_title);
		valuePrinter.Print("Article Page Count", m_pageCount);
		valuePrinter.Print("Article Word Count", m_wordCount);
		valuePrinter.Print("Article Author", m_author);
	}
};

#endif //ARTICLE_H
