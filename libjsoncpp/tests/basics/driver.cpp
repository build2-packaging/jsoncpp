#include <json/json.h>

#undef NDEBUG
#include <cassert>
#include <sstream>

int main ()
{
  Json::Value root;
  std::istringstream in (R"({"name": "jsoncpp", "ok": true})");
  in >> root;

  assert (root["ok"].asBool ());
  assert (root["name"].asString () == "jsoncpp"); // non-inline: json_value.cpp

  Json::StreamWriterBuilder wb;
  std::string out (Json::writeString (wb, root)); // non-inline: json_writer.cpp
  assert (!out.empty ());
}
