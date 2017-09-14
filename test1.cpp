#include <iostream>

#include <gtest/gtest.h>

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>

#include <boost/lexical_cast.hpp>

TEST(uuid, tostring) {
  auto uuid = boost::uuids::random_generator()();
  auto a = boost::lexical_cast<std::string>(uuid);
  auto b = boost::lexical_cast<std::string>(uuid);
  EXPECT_EQ(a, b);
}
