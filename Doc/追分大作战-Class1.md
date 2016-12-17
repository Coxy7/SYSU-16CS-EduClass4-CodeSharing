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
   1. pointer to a single variable``
    int x;
    int *p = &x;
    free (p);
    ``
   2. pointer to an array``
    int *p = (int *)malloc( sizeof(int) * 10 );
    free (p);
   ``
   3. 2D pointer to an array of pointers```
    int *p = (int **)malloc( sizeof(int *) * 10 );
    for (int i = 0; i < 10; ++i) p[i] = (int *)malloc( sizeof(int) * 5 );
    for (int i = 0; i < 10; ++i) free (p[i]);
    free (p);
   ```
 
## Sorting
* Bubble sort
* Selection sort
* Merge sort
 * Devide-and-conquer

## Time complecity
* What does time complecity means
 * how efficient an algorithm is
 * how much time it takes to get the answer
* "elementary operation"
 * +, -, *, /, %
 * ++, --, =, ==, !=, >, <, ...
 * a "simple" way to measure time complexity: how many elementary operations it needs
* Big O Notation
 * defined in calculus
 * based on how many elementary operations are needed, with the *constants* and *"minor" parts* omitted
 > eg. 
    $\frac{1}{2}n$ --> $O(n)$
    $2n^2 + 10n + \sqrt n$ --> $O(n^2)$
    $log_2 n$ --> $O(\text{log }n)$

 * [some samples](https://github.com/Carlxiao/SYSU-16CS-EduClass4-CodeSharing/blob/master/Doc/Time-Complexity-Sample.md)
 
## Problems
* 简单字符串匹配 [AC](https://github.com/Carlxiao/SYSU-16CS-EduClass4-CodeSharing/blob/master/Programming-I/161207-JianDanZiFuChuanPiPei.c)
* 螺旋数组 [AC](https://github.com/Carlxiao/SYSU-16CS-EduClass4-CodeSharing/blob/master/Programming-I/161123-LuoXuanShuZu.c)
* 纪念邮票 [TLE](https://github.com/Carlxiao/SYSU-16CS-EduClass4-CodeSharing/blob/master/Programming-I/161116-JiNianYouPiao-TLESamples.c) [AC](https://github.com/Carlxiao/SYSU-16CS-EduClass4-CodeSharing/blob/master/Programming-I/161116-JiNianYouPiao.c)