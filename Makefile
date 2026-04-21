# Cách dùng: make run p=Ten_Thu_Muc/Ten_File.cpp
# Ví dụ: make run p=The_Abstract_Machine/abstract_machine.cpp

run:
	@g++ -Wall -std=c++17 "$(p)" -o temp_app && ./temp_app && rm temp_app