#!/usr/bin/ruby

# main.rb | Fizz Buzz | Roman S. Collins | Tue, Feb 06, 2018
#
# Fizz Buzz in Ruby

class Main
    def fizzbuzz
        for i in (0...101)
            x = true

            if (i % 3 == 0) and (i % 5 == 0)
                puts "fizzbuzz"
                x = false
                next
            end

            if (i % 3 == 0)
                puts "fizz"
                x = false
                next
            end

            if (i % 5 == 0)
                puts "buzz"
                x = false
                next
            end

            if x == true
                puts i
                next
            end
        end
    end
end

main = Main.new
main.fizzbuzz
