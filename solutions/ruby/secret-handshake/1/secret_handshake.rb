=begin
Write your code for the 'Secret Handshake' exercise in this file. Make the tests in
`secret_handshake_test.rb` pass.

To get started with TDD, see the `README.md` file in your
`ruby/secret-handshake` directory.
=end

class SecretHandshake
    def initialize(number)
        @number = number
    end

    def commands
        answer = []
        if @number.is_a? Integer
          binary = @number.to_s(2)
        else
          return answer
        end




        if binary[-1] == '1'

          answer.push('wink')
        end
        if binary[-2] == '1'

          answer.push('double blink')
        end

        if binary[-3] == '1'

          answer.push('close your eyes')
        end

        if binary[-4] == '1'

          answer.push('jump')
        end

        if binary[-5]  == '1'
            answer = answer.reverse()
        end


        return answer

    end

end
