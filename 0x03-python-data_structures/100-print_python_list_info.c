#include <Python.h>

/**
 * print_python_list_info - Prints basic info about Python lists.
 * @p: A pyObject list.
 *
*/
void print_python_list_info(pyObject *P)
{
int size, alloc, i;
pyObject *obj;
size = py-SIZE(P);
alloc = ((PyListObject *)P)->allocated;
printf("[*] size of the python list = %d\n", size);
printf("[*] Allocated = %d\n", alloc);
for (i = 0; i < size; i++)
{
printf("Element %d: ", i);
obj = pyList_GetItem(P, i);
printf("%s\n", py_TYPE(obj)->tp_name);
}
}
