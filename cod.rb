# you can write to stdout for debugging purposes, e.g.
# puts "this is a debug message"

require 'pry'

def solution(a)
  # write your code in Ruby 2.2
  i = 0
  run = 0
  last_flag = false
  period = 0
  while i < a.length do 
    if (i + 3) < a.length 
      if check(a[i], a[i + 1], a[i + 2])
        if last_flag == true
          run += 1
        else
          run = 1
          last_flag = true
        end
      else  
        if last_flag == true
          period += n_cons(run)
          last_flag = false
        end
      end
    end
    i += 1
  end
  return period
end

def check(m, n, p)
  if p - n == n - m 
    true
  else  
    false
  end
end

def n_cons(n)
  if n % 2 == 0
    return ((n/2) * (n + 1))
  else
    return (n * (n + 1)/2)
  end
end

a = [-1, 1, 3,3,3,2,3,2,1,0]

binding.pry

puts "Sdfsd"