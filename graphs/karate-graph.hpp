//
// Copyright 2021 Andrew Lumsdaine
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//  Example karate club edge list and adjacency list graph
// 

#ifndef NWGRAPH_KARATE_GRAPH_HPP
#define NWGRAPH_KARATE_GRAPH_HPP

#include <vector>
#include <tuple>

std::vector<std::tuple<size_t, size_t>> karate_index_edge_list {
{ 1, 0 },
{ 2, 0 },
{ 3, 0 },
{ 4, 0 },
{ 5, 0 },
{ 6, 0 },
{ 7, 0 },
{ 8, 0 },
{ 10, 0 },
{ 11, 0 },
{ 12, 0 },
{ 13, 0 },
{ 17, 0 },
{ 19, 0 },
{ 21, 0 },
{ 31, 0 },
{ 2, 1 },
{ 3, 1 },
{ 7, 1 },
{ 13, 1 },
{ 17, 1 },
{ 19, 1 },
{ 21, 1 },
{ 30, 1 },
{ 3, 2 },
{ 7, 2 },
{ 8, 2 },
{ 9, 2 },
{ 13, 2 },
{ 27, 2 },
{ 28, 2 },
{ 32, 2 },
{ 7, 3 },
{ 12, 3 },
{ 13, 3 },
{ 6, 4 },
{ 10, 4 },
{ 6, 5 },
{ 10, 5 },
{ 16, 5 },
{ 16, 6 },
{ 30, 8 },
{ 32, 8 },
{ 33, 8 },
{ 33, 9 },
{ 33, 13 },
{ 32, 14 },
{ 33, 14 },
{ 32, 15 },
{ 33, 15 },
{ 32, 18 },
{ 33, 18 },
{ 33, 19 },
{ 32, 20 },
{ 33, 20 },
{ 32, 22 },
{ 33, 22 },
{ 25, 23 },
{ 27, 23 },
{ 29, 23 },
{ 32, 23 },
{ 33, 23 },
{ 25, 24 },
{ 27, 24 },
{ 31, 24 },
{ 31, 25 },
{ 29, 26 },
{ 33, 26 },
{ 33, 27 },
{ 31, 28 },
{ 33, 28 },
{ 32, 29 },
{ 33, 29 },
{ 32, 30 },
{ 33, 30 },
{ 32, 31 },
{ 33, 31 },
{ 33, 32 },
};

std::vector<std::vector<size_t>> karate_directed_adjacency_list {
   /* 0*/ { },
   /* 1*/ {   0,},
   /* 2*/ {   0,  1,},
   /* 3*/ {   0,  1,  2,},
   /* 4*/ {   0,},
   /* 5*/ {   0,},
   /* 6*/ {   0,  4,  5,},
   /* 7*/ {   0,  1,  2,  3,},
   /* 8*/ {   0,  2,},
   /* 9*/ {   2,},
   /* 10*/ {   0,  4,  5,},
   /* 11*/ {   0,},
   /* 12*/ {   0,  3,},
   /* 13*/ {   0,  1,  2,  3,},
   /* 14*/ { },
   /* 15*/ { },
   /* 16*/ {   5,  6,},
   /* 17*/ {   0,  1,},
   /* 18*/ { },
   /* 19*/ {   0,  1,},
   /* 20*/ { },
   /* 21*/ {   0,  1,},
   /* 22*/ { },
   /* 23*/ { },
   /* 24*/ { },
   /* 25*/ {  23,    24,},
   /* 26*/ { },
   /* 27*/ {   2,    23,    24,},
   /* 28*/ {   2,},
   /* 29*/ {  23,    26,},
   /* 30*/ {   1,  8,},
   /* 31*/ {   0,    24,    25,    28,},
   /* 32*/ {   2,  8,    14,    15,    18,    20,    22,    23,    29,    30,    31,},
   /* 33*/ {   8,  9,    13,    14,    15,    18,    19,    20,    22,    23,    26,    27,    28,    29,    30,    31,    32,},
};

std::vector<std::vector<size_t>> karate_undirected_adjacency_list {
   /* 0*/ {   1,  2,  3,  4,  5,  6,  7,  8,    10,    11,    12,    13,    17,    19,    21,    31,},
   /* 1*/ {   0,  2,  3,  7,    13,    17,    19,    21,    30,},
   /* 2*/ {   0,  1,  3,  7,  8,  9,    13,    27,    28,    32,},
   /* 3*/ {   0,  1,  2,  7,    12,    13,},
   /* 4*/ {   0,  6,    10,},
   /* 5*/ {   0,  6,    10,    16,},
   /* 6*/ {   0,  4,  5,    16,},
   /* 7*/ {   0,  1,  2,  3,},
   /* 8*/ {   0,  2,    30,    32,    33,},
   /* 9*/ {   2,    33,},
   /* 10*/ {   0,  4,  5,},
   /* 11*/ {   0,},
   /* 12*/ {   0,  3,},
   /* 13*/ {   0,  1,  2,  3,    33,},
   /* 14*/ {  32,    33,},
   /* 15*/ {  32,    33,},
   /* 16*/ {   5,  6,},
   /* 17*/ {   0,  1,},
   /* 18*/ {  32,    33,},
   /* 19*/ {   0,  1,    33,},
   /* 20*/ {  32,    33,},
   /* 21*/ {   0,  1,},
   /* 22*/ {  32,    33,},
   /* 23*/ {  25,    27,    29,    32,    33,},
   /* 24*/ {  25,    27,    31,},
   /* 25*/ {  23,    24,    31,},
   /* 26*/ {  29,    33,},
   /* 27*/ {   2,    23,    24,    33,},
   /* 28*/ {   2,    31,    33,},
   /* 29*/ {  23,    26,    32,    33,},
   /* 30*/ {   1,  8,    32,    33,},
   /* 31*/ {   0,    24,    25,    28,    32,    33,},
   /* 32*/ {   2,  8,    14,    15,    18,    20,    22,    23,    29,    30,    31,    33,},
   /* 33*/ {   8,  9,    13,    14,    15,    18,    19,    20,    22,    23,    26,    27,    28,    29,    30,    31,    32,},
 };

#endif // NWGRAPH_KARATE_GRAPH_HPP
