/*
 * Copyright 2024 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually
 * edited  */
/* The following lines can be configured to regenerate this file during cmake */
/* If manual edits are made, the following tags should be modified accordingly.
 */
/* BINDTOOL_GEN_AUTOMATIC(0) */
/* BINDTOOL_USE_PYGCCXML(0) */
/* BINDTOOL_HEADER_FILE(utilities.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(c19544ba017fc949568d0faa71ca2787) */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/lora_sdr/utilities.h>
// pydoc.h is automatically generated in the build directory
#include <utilities_pydoc.h>

void bind_utilities(py::module &m) {

  py::enum_<::gr::lora_sdr::Symbol_type>(m, "Symbol_type")
      .value("VOID", ::gr::lora_sdr::Symbol_type::VOID)                 // 0
      .value("UPCHIRP", ::gr::lora_sdr::Symbol_type::UPCHIRP)           // 1
      .value("SYNC_WORD", ::gr::lora_sdr::Symbol_type::SYNC_WORD)       // 2
      .value("DOWNCHIRP", ::gr::lora_sdr::Symbol_type::DOWNCHIRP)       // 3
      .value("QUARTER_DOWN", ::gr::lora_sdr::Symbol_type::QUARTER_DOWN) // 4
      .value("PAYLOAD", ::gr::lora_sdr::Symbol_type::PAYLOAD)           // 5
      .value("UNDETERMINED", ::gr::lora_sdr::Symbol_type::UNDETERMINED) // 6
      .export_values();

  py::implicitly_convertible<int, ::gr::lora_sdr::Symbol_type>();
  py::enum_<::gr::lora_sdr::ldro_mode>(m, "ldro_mode")
      .value("DISABLE", ::gr::lora_sdr::ldro_mode::DISABLE) // 0
      .value("ENABLE", ::gr::lora_sdr::ldro_mode::ENABLE)   // 1
      .value("AUTO", ::gr::lora_sdr::ldro_mode::AUTO)       // 2
      .export_values();

  py::implicitly_convertible<int, ::gr::lora_sdr::ldro_mode>();

  m.def("mod", &::gr::lora_sdr::mod, py::arg("a"), py::arg("b"), D(mod));

  m.def("double_mod", &::gr::lora_sdr::double_mod, py::arg("a"), py::arg("b"),
        D(double_mod));

  m.def("int2bool", &::gr::lora_sdr::int2bool, py::arg("integer"),
        py::arg("n_bits"), D(int2bool));

  m.def("bool2int", &::gr::lora_sdr::bool2int, py::arg("b"), D(bool2int));

  m.def("build_upchirp", &::gr::lora_sdr::build_upchirp, py::arg("chirp"),
        py::arg("id"), py::arg("sf"), py::arg("os_factor") = 1,
        D(build_upchirp));

  m.def("build_ref_chirps", &::gr::lora_sdr::build_ref_chirps,
        py::arg("upchirp"), py::arg("downchirp"), py::arg("sf"),
        py::arg("os_factor") = 1, D(build_ref_chirps));

  m.def("most_frequent", &::gr::lora_sdr::most_frequent, py::arg("arr"),
        py::arg("n"), D(most_frequent));

  m.def("random_string", &::gr::lora_sdr::random_string, py::arg("Nbytes"),
        D(random_string));
}
