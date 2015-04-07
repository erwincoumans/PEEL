///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
 *	Contains code for point-rectangle distance
 *	\file		CTC_PointRectangleDistance.h
 *	\author		Pierre Terdiman
 *	\date		January, 13, 2000
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Include Guard
#ifndef CTCPOINTRECTANGLEDISTANCE_H
#define CTCPOINTRECTANGLEDISTANCE_H

	// Point-rectangle squared distance
	CONTACT_API float PointRectangleSqrDist(const Point& p, const Rectangle3& rectangle, float* s=null, float* t=null);

#endif // CTCPOINTRECTANGLEDISTANCE_H