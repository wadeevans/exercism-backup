"""
    count_nucleotides(strand)

The count of each nucleotide within `strand` as a dictionary.

Invalid strands raise a `DomainError`.

"""
function count_nucleotides(strand)
    Dict2 = Dict('A' => 0, 'C' => 0, 'G' => 0, 'T' => 0)
    for ch in strand
        if (ch == 'G')
                Dict2['G'] += 1
        elseif (ch == 'A')
                Dict2['A'] += 1
        elseif (ch == 'C')
                Dict2['C'] += 1
        elseif (ch == 'T')
                Dict2['T'] += 1
        else
                throw(DomainError(1, "expects only A,C,G, or T"))
        end
    end
    return Dict2
end
