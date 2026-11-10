#!/usr/bin/env ruby

# Collect all arguments, convert them to integers (if possible) or keep as strings, and sort them
result = ARGV.map { |arg| arg.to_i }

result.sort.each do |n|
  puts n
end
