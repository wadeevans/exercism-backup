=begin
Write your code for the 'Resistor Color Duo' exercise in this file. Make the tests in
`resistor_color_duo_test.rb` pass.

To get started with TDD, see the `README.md` file in your
`ruby/resistor-color-duo` directory.
=end

module ResistorColorDuo

    def self.value(arr)
        array = ["black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"]
        return (array.index(arr[0]) * 10) + (array.index(arr[1]))
    end

end
