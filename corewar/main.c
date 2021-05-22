/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include <erty/getopt.h>
#include <erty/ecolors.h>
#include <erty/string/esstring.h>
#include <stdlib.h>
#include <corewar/vm.h>
#include <stdlib.h>

int main(int argc UNUSED, char *argv[] UNUSED)
{
    struct virtual_machine vm = {0};

    eprintf("%02x\n", 0x9);
    if (argc <= 1)
        return (84);
    if (vm_init(&vm, argv + 1) == false)
        return (84);
    while (1)
        tick_procs(&vm);
    return (EXIT_SUCCESS);
}
