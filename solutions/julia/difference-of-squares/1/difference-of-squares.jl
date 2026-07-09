"Square the sum of the first `n` positive integers"
function square_of_sum(n)
    sum = 0
    for x in 1:n
        sum = sum + x
    end
    return sum * sum 
end

"Sum the squares of the first `n` positive integers"
function sum_of_squares(n)
    sum = 0
    for x in 1:n
       sum = sum + (x * x)
    end
    return sum
end

"Subtract the sum of squares from square of the sum of the first `n` positive ints"
function difference(n)
    diff = square_of_sum(n) - sum_of_squares(n)
    return diff
end
