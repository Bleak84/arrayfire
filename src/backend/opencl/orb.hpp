/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#include <af/features.h>
#include <Array.hpp>

using af::features;

namespace opencl
{

template<typename T, typename convAccT>
void orb(features& feat, Array<unsigned>** desc, const Array<T>& in,
         const float fast_thr, const unsigned max_feat,
         const float scl_fctr, const unsigned levels);

}
