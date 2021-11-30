
#include <gtest/gtest.h>

#include <rs_driver/msg/packet.h>

using namespace robosense::lidar;

TEST(TestPacket, ctor)
{
  Packet pkt(100);

  ASSERT_TRUE(pkt.buf() != NULL);
  ASSERT_EQ(pkt.bufSize(), 100);

  ASSERT_EQ(pkt.data(), pkt.buf());
  ASSERT_EQ(pkt.dataSize(), 0);

  pkt.setData(5, 10);
  ASSERT_EQ(pkt.data(), pkt.buf()+5);
  ASSERT_EQ(pkt.dataSize(), 10);
}

