//
// Copyright (c) 2017 The Khronos Group Inc.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#include "harness/compat.h"

#include <stdio.h>
#include <string.h>
#include "procs.h"
#include "harness/testHarness.h"
#include "harness/mt19937.h"

#if !defined(_WIN32)
#include <unistd.h>
#endif

test_definition test_list[] = {
    ADD_TEST_VERSION( partition_equally, Version(1, 2) ),
    ADD_TEST_VERSION( partition_by_counts, Version(1, 2) ),
    ADD_TEST_VERSION( partition_by_affinity_domain_numa, Version(1, 2) ),
    ADD_TEST_VERSION( partition_by_affinity_domain_l4_cache, Version(1, 2) ),
    ADD_TEST_VERSION( partition_by_affinity_domain_l3_cache, Version(1, 2) ),
    ADD_TEST_VERSION( partition_by_affinity_domain_l2_cache, Version(1, 2) ),
    ADD_TEST_VERSION( partition_by_affinity_domain_l1_cache, Version(1, 2) ),
    ADD_TEST_VERSION( partition_by_affinity_domain_next_partitionable, Version(1, 2) ),
    ADD_TEST_VERSION( partition_all, Version(1, 2) ),
};

const int test_num = ARRAY_SIZE( test_list );

int main(int argc, const char *argv[])
{
    return runTestHarness(argc, argv, test_num, test_list, true, 0);
}
