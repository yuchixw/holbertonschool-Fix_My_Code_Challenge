#!/usr/bin/env ruby

# Collect arguments, convert numeric ones to integers, sort them properly, and print unique/all correctly
numbers = []
strings = []

ARGV.each do |arg|
  if arg =~ /^-?\d+$/
    numbers << arg.to_i
  else
    strings << arg
  end
end

# Sort numbers numerically and strings alphabetically, then print
(numbers.sort + strings.sort).each do |n|
  puts n
end
