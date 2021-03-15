/**
* @mainpage
* @section intro Introduction
*
* The implementation and evaluation of a collection of Sorting and Searching Algorithms.
* 
* @section objective Assignment Objective
*
* The target collection those algorithms are operation on, is an 'Array Backed List'. 
* This list shares (almost) the same interface (`list.h`) as the linked list from previous assignments
* but is implemented based on an array.
* Different sorting and searching algorithms are to be implemented using that list.
* A stopwatch shall be implemented that is used to measure the time a certain algorithm requires to sort or search.
* Eventually the measured times for defined number of list items and algorithms are compared.
* 
* **Configuration**
*
* The capacity of the backing array of the list is defined in `config.h` as `#define CAPACITY_INCREMENT`. 
* This value defines also the number of items for enlarging the backing array. This means, the array grows
* always in steps of `CAPACITY_INCREMENT` items.
*
* @section assignment Assignment
*
* In this assignment various sorting and search algorithms shall be implemented in multiple steps.
*
* **Step 1:**
*
* Implemenation of an 'Array Backed List' by implementing files `array_backed_list.h`. 
* This file implements `list.h` using an array as underlying collection instead of a linked list. 
* In contrast to earlier assignments, the function `list_append(…)` was removed and `list_swap(…)` was added.
* The array shall have a certain capacity and need to be increased (with all consequences, such as of copying items) 
* if another item is added to a 'full' list.
* As a benefit, random access to items is fast, which is required by (most) sorting and searching algorithms.
* For implementation details read and follow the instructions in file `array_backed_list.c`.
*
* **Step 2:**
* 
* Implementation of the infrastructure for selecting and using sorting and searching algorithms as well as
* for measuring the time a certain algorithm takes for completing its operation.
*
* **Step 3:**
*
* Implemenation of the following sorting algorithms:
* - - TO BE DEFINED --
*
*
* The library 'allocator' is provided for memory allocation functionality that integrates with unit testing. Behind the facade,
* allocats memory dynamically similar to `malloc`. Allocated memory must be freed when it is not used anymore. The 'allocator'
* library must be used for memory alloction operations, otherwise unit tests will fail.
* 
*
* -# Implement 'array_backed_list.c' against interface indirectly declared in 'list.h':
*    Make the program and tests compile: Implement all functions in all relevant files declared in the headers 
*    EMTPY (return nothing, 0, false, ... as required).
*   - All unit tests shall run but FAIL after this step
*   - **--COMMIT--**
* -# Implement the empty functions one by one to make the unit tests.
*   - Because most unit tests depends on `list_obtain(…)`, `list_release(…)`, `list_is_valid(…)`, 
*     `list_is_empty(…)`, `list_insert(…)`, and `list_get_size(…)` it makes sense to implement those
*     functions in one step.
*   - The purpose of a function is specified as API documentation within the header files.
*   - Obey comments in source files. Run the unit tests frequently and fix failures.
*   - **--COMMIT-- after each implemented function.**
*
*
* @section notes Notes
* -# make cleantest: This new make target for clearing the console, building, and running unit test is available.
* -# Sometimes changes are not properly detected by incremental builds. If something very strange 
*    happens during compilation, try to run `make clean` followed by `make` to start a clean build.
*    This approach is also recommended after everthing is done, because some compiler warning appears
*    only in clean builds. 
*/