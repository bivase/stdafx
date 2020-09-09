#pragma once
#if defined __has_include && __has_include ("QMainWindow")
#include <QFileDialog>
#endif

#include <array>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>
#include <random>
#include <functional>
#include <string>
#include <filesystem>
#include <optional>
#include <map>
//#include <execution>

#include "bits_operations/bits_operations.hpp"
#include "idxs/idxs.hpp"
#include "dvbs2_mono/dvbs2_mono.hpp"

namespace fs = std::filesystem;
