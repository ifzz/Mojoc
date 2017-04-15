/*
 *
 *
 *  Created on: 2013-1-10
 *  Author: scott.cgi
 */

#ifndef camera_h
#define camera_h


#include "Engine/Toolkit/Math/Matrix.h"
#include "Engine/Toolkit/Math/Math.h"


struct ACamera
{
	float left;
	float right;
	float bottom;

	float top;
	float near;
	float far;

	/**
	 * Camera position
	 */
	float eyeX;
	float eyeY;
	float eyeZ;

	/**
	 * We are looking toward the distance
	 */
	float lookX;
	float lookY;
	float lookZ;

	/**
	 * up vector control camera direction, perpendicular to the camera plane
	 */
	float upX;
	float upY;
	float upZ;
	
	/**
	 * Store view projection matrix
	 */
	Matrix4 get_only vp        [1];

	/**
	 * Store the projection matrix
	 */
	Matrix4 get_only projection[1];

	/**
	 * Store the view matrix
	 */
	Matrix4 get_only  view     [1];


	void  (*SetOrtho)     ();
	void  (*SetFrustum)   ();
	void  (*SetLookAt)    ();

	/**
	 * The ZOrder most near camera
	 */
	float (*GetNearZOrder)();

	/**
	 * The ZOrder most far camer
	 */
	float (*GetFarZOrder) ();
};


extern struct ACamera ACamera[1];


#endif
