//
// Created by abhib on 01-Jul-20.
//

#include "include/Player.h"
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>


namespace py = pybind11;

class PyIPlayer : public IPlayer {
public:
    /* Inherit the constructors */
    using IPlayer::IPlayer;

    /* Trampoline (need one for each virtual function) */
    void setHealth(unsigned int health) override {
        PYBIND11_OVERLOAD_PURE(
                void,               /* Return type */
                IPlayer,            /* Parent class */
                setHealth,          /* Name of function in C++ (must match Python name) */
                health             /* Argument(s) */
        );
    }
};

PYBIND11_MODULE(iglsynthcmake, m) {

    m.def("hello", [](){ return 0; });

    py::class_<IPlayer, PyIPlayer>(m, "IPlayer")
        .def("go", &IPlayer::setHealth);
        ;

    py::class_<Player1, IPlayer>(m, "Player1")
        .def (py::init<>())
        .def (py::init<unsigned int, std::string>())
        .def ("setHealth", &Player1::setHealth)
        ;

}