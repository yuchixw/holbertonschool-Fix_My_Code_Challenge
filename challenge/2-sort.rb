#!/usr/bin/env ruby

numbers = []
ARGV.each do |arg|
  # Yalnız tam ədəd olan arqumentləri seçirik (müsbət və ya mənfi)
  if arg =~ /\A-?\d+\z/
    numbers << arg.to_i
  end
end

# Ədədləri rəqəm ardıcıllığı ilə sıralayıb çap edirik
numbers.sort.each do |n|
  puts n
end
