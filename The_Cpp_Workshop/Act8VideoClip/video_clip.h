//
// Created by steam.hyperpolyglot on 18/12/2020.
//

#ifndef VIDEO_CLIP_H
#define VIDEO_CLIP_H

#include <iostream>
#include <string>
#include <cstring>
using namespace std;


class VideoClip {
public:
	VideoClip();
	
	VideoClip(float videoLength, string videoName, const char *data);
	
	VideoClip(const VideoClip &vc);
	
	VideoClip &operator=(const VideoClip &rhs);
	
	float m_videoLength;
	string m_videoName;
	int m_dataLength;
	char *m_data;
};


#endif //VIDEO_CLIP_H
