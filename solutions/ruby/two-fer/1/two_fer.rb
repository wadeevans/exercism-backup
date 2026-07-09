=begin
Write your code for the 'Two Fer' exercise in this file. Make the tests in
`two_fer_test.rb` pass.

To get started with TDD, see the `README.md` file in your
`ruby/two-fer` directory.
=end

module TwoFer
    def self.two_fer(*args)
        if args.size == 0
            return "One for you, one for me."
        elsif args.size == 1
            return "One for #{args[0]}, one for me."
        end
    end
end
