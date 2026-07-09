=begin
Write your code for the 'Hamming' exercise in this file. Make the tests in
`hamming_test.rb` pass.

To get started with TDD, see the `README.md` file in your
`ruby/hamming` directory.
=end

module Hamming
 def self.compute(str_A, str_B)

     if (str_A.length != str_B.length)
         raise ArgumentError.new
     end
     length = 0
     different = 0
      while length < str_A.length
          if str_A[length] != str_B[length]
              different += 1
          end
          length += 1
      end

     return different

 end


end
