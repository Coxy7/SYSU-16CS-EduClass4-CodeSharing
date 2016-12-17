## Basic understanding
* Code, coding
* Programming language
 * C
 * C++
 * Java
 * ...
* Algorithm
* I/O

## Pointer
* What is a pointer?
 * It is an variable
 * It stores an address

* Why it is called *pointer*
 * It stores the address for another variable, so it "points to" (refer to) that variable

* Array & pointer
 * if we define an array ``a[]`` then ``a`` alone is a (const) pointer, it refers to its first element, which means ``a == &a[0]``
 * the addresses of all elements in an array is consecutive
 * ``malloc`` can "turn a pointer into an array", and then we can use the pointer as an array, without any diffence (except that it needs to be freed)

* Operators relevant
 * ``&`` : get the address of a variable
 * ``*`` : if a pointer ``p`` refers to the variable ``a``, (that is, ``p == &a``) then ``*p`` is the same as ``a``
 * ``+``, ``-``, ``++``, ``--``, ``+=``, ``-=`` : moving a pointer forward/backward
 >eg. ``a[i]`` is the same as ``*(a+i)``

 * ``-`` for two pointers : (used only when the two pointers refer to elements in the same array) if ``p`` points to ``a[x]`` and ``q`` points to ``a[y]``, then ``p-q`` is the same as ``x-y``
 
* 2-dimensional pointer
 * It is a pointer
 * It refers to a pointer (that no more refers to another pointer...)
 * ``malloc`` can "turn a 2D pointer into an array whose elements are pointers"

* Free
    * all the memory space you acquire by ``malloc`` needs to be freed
    * how to free a pointer:
        * pointer to a single variable
        ```c
        int x;
        int *p = &x;
        free (p);
        ```
        * pointer to an array
        ```c
        int *p = (int *)malloc( sizeof(int) * 10 );
        free (p);
        ```
        * 2D pointer to an array of pointers
        ```c
        int **p = (int **)malloc( sizeof(int *) * 10 );
        for (int i = 0; i < 10; ++i)
            p[i] = (int *)malloc( sizeof(int) * 5 );
        for (int i = 0; i < 10; ++i) 
            free (p[i]);
        free (p);
        ```
 
## Sorting
* [Bubble sort](https://github.com/Carlxiao/SYSU-16CS-EduClass4-CodeSharing/blob/master/Template/BubbleSort.c)
* [Selection sort](https://github.com/Carlxiao/SYSU-16CS-EduClass4-CodeSharing/blob/master/Template/SelectionSort.c)
* [Merge sort](https://github.com/Carlxiao/SYSU-16CS-EduClass4-CodeSharing/blob/master/Template/MergeSort.c)
 * Devide-and-conquer
