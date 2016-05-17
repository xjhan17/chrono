// =============================================================================
// PROJECT CHRONO - http://projectchrono.org
//
// Copyright (c) 2014 projectchrono.org
// All right reserved.
//
// Use of this source code is governed by a BSD-style license that can be found
// in the LICENSE file at the top level of the distribution and at
// http://projectchrono.org/license-chrono.txt.
//
// =============================================================================
// Authors: Alessandro Tasora, Radu Serban
// =============================================================================

#include "chrono/physics/ChShaft.h"
#include "chrono/physics/ChShaftsTorque.h"
#include "chrono/physics/ChSystem.h"

namespace chrono {

// Register into the object factory, to enable run-time dynamic creation and persistence
ChClassRegister<ChShaftsTorque> a_registration_ChShaftsTorque;

ChShaftsTorque::ChShaftsTorque(const ChShaftsTorque& other) : ChShaftsTorqueBase(other) {}

void ChShaftsTorque::Copy(ChShaftsTorque* source) {
    // copy the parent class data...
    ChShaftsTorqueBase::Copy(source);
}

double ChShaftsTorque::ComputeTorque() {
    // Simply return the user-sspecified torque
    return torque;
}

void ChShaftsTorque::ArchiveOUT(ChArchiveOut& marchive) {
    // version number
    marchive.VersionWrite(1);

    // serialize parent class
    ChShaftsTorqueBase::ArchiveOUT(marchive);

    // serialize all member data:
}

/// Method to allow de serialization of transient data from archives.
void ChShaftsTorque::ArchiveIN(ChArchiveIn& marchive) {
    // version number
    int version = marchive.VersionRead();

    // deserialize parent class:
    ChShaftsTorqueBase::ArchiveIN(marchive);

    // deserialize all member data:
}

}  // end namespace chrono
