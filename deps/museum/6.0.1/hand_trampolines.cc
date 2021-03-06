#include <string>

namespace art {
  class ArtMethod;

  std::string PrettyMethod(ArtMethod* p1, bool p2)  {
    return ""; // don't bother faking diff-STL std::string magic, this isn't important enough
  }

  std::string StringPrintf(const char* p1, ...) {
    // forwarding varargs doesn't seem possible, so just return an empty string
    // also don't bother faking diff-STL std::string magic, this isn't important enough
    return "";
  }
} // namespace art
