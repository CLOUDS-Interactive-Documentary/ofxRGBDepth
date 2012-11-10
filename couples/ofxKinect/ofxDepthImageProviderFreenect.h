/*
 *  ofxRGBDepthFrameProviderFreenect.h
 *  ofxRGBDepthCaptureOpenNI
 *
 *  Created by Jim on 3/13/12.
 *  Copyright 2012 FlightPhase. All rights reserved.
 *
 */

#pragma once

#include "ofMain.h"
#include "ofxDepthImageProvider.h"
#include "ofxKinect.h"

class ofxDepthImageProviderFreenect : public ofxDepthImageProvider {
  public:
	
	void setup(); 
	void update();
	ofVec3f getWorldCoordinateAt(int x, int y);
	int maxDepth();	
	void close();
	
  protected:
	ofxKinect kinect;
};
