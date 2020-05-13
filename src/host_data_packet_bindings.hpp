#pragma once

//pybind11
#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>

// depthai-api
#include "host_data_packet.hpp"

void init_binding_host_data_packet(pybind11::module& m);

struct PyHostDataPacket : public HostDataPacket{
    pybind11::array* getPythonNumpyArray();
};