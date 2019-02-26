# Will Eshbaugh
# Homework 6
# Replacing parts of strings using Regex and Ruby

print "Enter a string: "
original = gets.chomp
original = original.downcase
words = Array.new
result = Array.new
indices = Array.new

words = original.scan(/\w+/)


i = 0
j = -1
k = 0
for item in words
   last = item.size - 1 # index of last char in an item 
   item = item.gsub(/^[fF]/i, "gh")

   while j = item.index("i", j+1)
    indices << j
   end
    
    while (indices[k] != 0 && indices[k] != last) do
      if k >= indices.size
        break
      end    
      item = item.sub(item[indices[k]], "o")
      k = k+1
    end

   item = item.gsub(/[s][h]$/i, "ti")

   result[i] = item
   i += 1
end

puts result.join(" ")