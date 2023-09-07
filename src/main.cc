#include <iostream>

#include "../gen/test.pb.h"

void TestDescriptor(google::protobuf::Descriptor const *descriptor) {
  auto const &message_option = descriptor->options().GetExtension(test::message_option);

  std::cout << "Message option: " << message_option << std::endl;

  for (int i = 0; i < descriptor->field_count(); ++i) {
    auto field_descriptor = descriptor->field(i);

    auto const &option = field_descriptor->options().GetExtension(test::field_option);

    std::cout << "Field [" << field_descriptor->name() << "] option: " << option << std::endl;
  }
}

int main() {
  TestDescriptor(test::Test::descriptor());

  return 0;
}