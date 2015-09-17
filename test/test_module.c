#include <Python.h>

PyMODINIT_FUNC
inittest_module(void)
{
    PyObject *m;

    m = Py_InitModule("test_module", NULL);
    if (m == NULL)
        return;

    PyObject* s = PyString_FromString("yo!");
    Py_INCREF(s);
    PyModule_AddObject(m, "s", s);
}