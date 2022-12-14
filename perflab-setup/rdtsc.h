//-*-c++-*-
#ifndef _rdtsc_h_
#define _rdtsc_h_

//
// Inline function to read the CPU clock
//
inline
unsigned long long int rdtscll(void)
{
   unsigned long long int x; // From lecture, for unsigned long long int below
   unsigned a, d;

   __asm__ volatile("rdtsc" : "=a" (a), "=d" (d));

   return ((unsigned long long)a) | (((unsigned long long)d) << 32);;
}

#endif
