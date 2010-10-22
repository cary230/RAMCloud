/* Copyright (c) 2010 Stanford University
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR(S) DISCLAIM ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL AUTHORS BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include "TestUtil.h"

#include "Segment.h"
#include "Log.h"
#include "LogTypes.h"

namespace RAMCloud {

/**
 * Unit tests for Log.
 */
class LogTest : public CppUnit::TestFixture {

    DISALLOW_COPY_AND_ASSIGN(LogTest); // NOLINT

    CPPUNIT_TEST_SUITE(LogTest);
    CPPUNIT_TEST(test_constructor);
    CPPUNIT_TEST(test_isSegmentLive);
    CPPUNIT_TEST(test_getSegmentId);
    CPPUNIT_TEST(test_append);
    CPPUNIT_TEST(free);
    CPPUNIT_TEST(registerType);
    CPPUNIT_TEST(forEachSegment);
    CPPUNIT_TEST_SUITE_END();

  public:
    LogTest() {}

    void
    test_constructor()
    {
    }

    void
    test_isSegmentLive()
    {
    }

    void
    test_getSegmentId()
    {
    }

    void
    test_append()
    {
    }

    void
    free()
    {
    }

    void
    registerType()
    {
    }

    void
    forEachSegment()
    {
    }
};
CPPUNIT_TEST_SUITE_REGISTRATION(LogTest);

} // namespace RAMCloud
