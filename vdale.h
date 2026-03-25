/*
 * vdale.h
 *
 * Copyright 2024 Vdale <>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */

#ifndef VDALE_H
#define VDALE_H



#include <errno.h> 
#include <fcntl.h>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <unistd.h>
#include <thread>
#include <chrono>




// Name Spaces
using namespace std;
using namespace this_thread;
using namespace chrono;

// Variables
// Bool
bool bGood	= false;
bool HiLo	= true;

// 	integer type with the maximum width supported.
	typedef	intmax_t		smax;

	// 	integer type with a width of exactly 8, 16, 32, or 64 bits.
	//	For signed types, negative values are
	//	represented using 2's complement.
	//	No padding bits.
	
	typedef int8_t			s8;
	typedef int16_t			s16;
	typedef int32_t			s32;
	typedef int64_t			s64;

	/*	integer type with a minimum of 8, 16, 32, or 64 bits.
		No other integer type exists with lesser size
		and at least the specified width.
	*/
	typedef int_least8_t	sl8;
	typedef int_least16_t	sl16;
	typedef int_least32_t	sl32;
	typedef int_least64_t	sl64;

	/*
		Integer type with a minimum of 8, 16, 32, or 64 bits.
		At least as fast as any other integer type
		with at least the specified width.
	*/
	typedef int_fast8_t		sf8;
	typedef int_fast16_t	sf16;
	typedef int_fast32_t	sf32;
	typedef int_fast64_t	sf64;

	/*	Integer type capable of holding a value converted from
		a void pointer and then be converted back to that type
		with a value that compares equal to the original pointer.
	*/
	 typedef intptr_t		sptr;

	/* 	integer type with the maximum width supported.*/
	typedef	intmax_t		umax;

	/* 	integer type with a width of exactly 8, 16, 32, or 64 bits.
		For signed types, negative values are
		represented using 2's complement.
		No padding bits.
	*/
	typedef uint8_t			u8;
	typedef uint16_t		u16;
	typedef uint32_t		u32;
	typedef uint64_t		u64;

	/*	integer type with a minimum of 8, 16, 32, or 64 bits.
		No other integer type exists with lesser size
		and at least the specified width.
	*/
	typedef uint_least8_t	ul8;
	typedef uint_least16_t	ul16;
	typedef uint_least32_t	ul32;
	typedef uint_least64_t	ul64;

	/*
		Integer type with a minimum of 8, 16, 32, or 64 bits.
		At least as fast as any other integer type
		with at least the specified width.
	*/
	typedef uint_fast8_t	uf8;
	typedef uint_fast16_t	uf16;
	typedef uint_fast32_t	uf32;
	typedef uint_fast64_t	uf64;

	/*	Integer type capable of holding a value converted from
		a void pointer and then be converted back to that type
		with a value that compares equal to the original pointer.
	*/
	typedef uintptr_t		uptr;
	
	/*
		Other TypeDefs
	
	*/
	typedef string			str;
	typedef uint8_t 		byte;
	
// Function prototypes 
	
void Delay(u16);

// NULL pointer Checks - Overloaded Functions
bool NULL_Ptr_Ck(FILE*);	// File ptr Check
bool NULL_Ptr_Ck(u8*);		// u8 ptr Check


// NULL pointer Checks - Definitions

	// File Pointer
bool NULL_Ptr_Ck(FILE* ptr)
{
	if(ptr == NULL)
	{
		cout << "Pointer is NULL\n";
		bGood = false;
	}
	else
		bGood = true;
	return bGood;
}

	// u8 Pointer
bool NULL_Ptr_Ck(u8* ptr)
{
	if(ptr == NULL)
	{
		cout << "Pointer is NULL\n";
		bGood = false;
	}
	else
		bGood = true;
	return bGood;
}

// Start of Function Definitions

// Start of Delay
void Delay(u16 ms)
{
	cout << "Delay Called\n";
	// ms - milliseconds : 1000 ms = 1 second
	usleep(ms);
}

#endif
