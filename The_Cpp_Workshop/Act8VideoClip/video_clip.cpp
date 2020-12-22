//
// Created by steam.hyperpolyglot on 18/12/2020.
//

#include <iostream>
#include <string>
#include <cstring>
#include "video_clip.h"

using namespace std;

VideoClip::VideoClip() {
	m_videoLength = 0;
	m_videoName = "NOT SET";
	m_dataLength = 0;
	m_data = 0;
}

VideoClip::VideoClip(float videoLength, string videoName, const char *data) {
	m_videoLength = videoLength;
	m_videoName = videoName;
	m_dataLength = strlen(data);
	m_data = new char[m_dataLength + 1];
	strcpy(m_data, data);
}

VideoClip::VideoClip(const VideoClip &vc) {
	m_videoLength = vc.m_videoLength;
	m_videoName = vc.m_videoName;
	m_dataLength = vc.m_dataLength;
	m_data = new char[m_dataLength + 1];
	strcpy(m_data, vc.m_data);
}

VideoClip &VideoClip::operator=(const VideoClip &rhs) {
	if (this != &rhs) {
		m_videoLength = rhs.m_videoLength;
		m_videoName = rhs.m_videoName;
		m_dataLength = rhs.m_dataLength;
		char *newData = new char[m_dataLength];
		strcpy(newData, rhs.m_data);
		delete[] m_data;
		m_data = newData;
	}
	return *this;
}
