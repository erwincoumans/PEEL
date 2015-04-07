///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
 *	Contains code for splines.
 *	\file		IceSpline.h
 *	\author		Pierre Terdiman
 *	\date		October, 3, 2000
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Include Guard
#ifndef ICESPLINE_H
#define ICESPLINE_H

	typedef float eq_p[4];	// At^3 + Bt^2 + Ct + D
	typedef eq_p eq[3];		// equations for our 3 components

	#define MAX_CONTROLS	128
	#define MAX_EQUATIONS	(MAX_CONTROLS-1)

	class ICEMATHS_API Spline : public Allocateable
	{
		public:
		// Constructor/Destructor
									Spline();
									~Spline();
		// Data access
		inline_	Vertices&			GetControlPts()				{ return mControlPts;	}
		inline_	const Vertices&		GetControlPts()		const	{ return mControlPts;	}

		inline_	void				SetMode(bool mode)			{ mMode = mode;			}

				bool				ComputeEquations();
				bool				ComputeVertices(Vertices& spline, sdword tesselation);
		private:
				eq					mEqus[MAX_EQUATIONS];	// all equations
				Vertices			mControlPts;
				bool				mMode;
	};

#endif	// ICESPLINE_H