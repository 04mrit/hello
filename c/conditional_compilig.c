// C program to detect Operating System

#include <stdio.h>



void main(){
    #ifdef __linux__
        printf("This part is compiled if os is linux");
        
    #elif _WIN32 (){
        printf("This part is compiled if os is Windows");
    #endif
}


// void main()
// {
//     #ifdef __linux__
//         printf("This part is compiled if os Linux OS.\n");

//     #elif _WIN32
//         printf("This part is compiled if os Windows OS.\n");

//     #elif __APPLE__
//         printf("This part is compiled if os Mac OS.\n");

//     #elif TARGET_OS_EMBEDDED
//         printf("This part is compiled if os iOS embedded OS.\n");

//     #elif TARGET_IPHONE_SIMULATOR
//         printf("This part is compiled if os iOS simulator OS.\n");

//     #elif TARGET_OS_IPHONE
//         printf("This part is compiled if os iPhone OS.\n");

//     #elif TARGET_OS_MAC
//         printf("This part is compiled if os MAC OS.\n");

//     #elif __ANDROID__
//         printf("This part is compiled if os android OS.\n");

//     #elif __unix__
//         printf("This part is compiled if os unix OS.\n");

//     #elif _POSIX_VERSION
//         printf("This part is compiled if os POSIX based OS.\n");

//     #elif __sun
//         printf("This part is compiled if os Solaris OS.\n");

//     #elif __hpux
//         printf("This part is compiled if os HP UX OS.\n");

//     #elif BSD
//         printf("This part is compiled if osSolaris OS.\n");

//     #elif __DragonFly__
//         printf("This part is compiled if os DragonFly BSD OS.\n");

//     #elif __FreeBSD__
//         printf("This part is compiled if os FreeBSD OS.\n");

//     #elif __NetBSD__
//         printf("This part is compiled if os Net BSD OS.\n");

//     #elif __OpenBSD__
//         printf("This part is compiled if os Open BSD OS.\n");

//     #else
//         printf("Sorry, the system are not listed above.\n");
//     #endif
// }
