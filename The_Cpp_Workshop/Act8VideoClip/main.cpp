#include <iostream>
#include <string>
#include "video_clip.h"

using namespace std;

int main () {
	VideoClip vc1 ( 10.0f, "Halloween (2019)",
	                "dfhdgdfdgdgdfhdfhfgdhksfdgsfsg" );
	VideoClip vc2 ( 20.0f, "Halloween (1978)", "jskdjfkjskdjdkjjdkfj" );
	VideoClip vc3 ( 50.0f, "The Shining", "kotriosksidhdkshssdds" );
	
	cout << vc1.m_videoLength << " " << vc1.m_videoName << " "
	     << vc1.m_data << endl;
	
	cout << vc2.m_videoLength << " " << vc2.m_videoName << " "
	     << vc2.m_data << endl;
	
	cout << vc3.m_videoLength << " " << vc3.m_videoName << " "
	     << vc3.m_data << endl;
	
	VideoClip vc4 = vc1;
	vc2 = vc4;
	
	cout << vc1.m_videoLength << " " << vc1.m_videoName << " "
	     << vc1.m_data << endl;
	
	cout << vc2.m_videoLength << " " << vc2.m_videoName << " "
	     << vc2.m_data << endl;
	
	cout << vc3.m_videoLength << " " << vc3.m_videoName << " "
	     << vc3.m_data << endl;
	
	cout << vc4.m_videoLength << " " << vc4.m_videoName << " "
	     << vc4.m_data << endl;
	
	return 0;
}
