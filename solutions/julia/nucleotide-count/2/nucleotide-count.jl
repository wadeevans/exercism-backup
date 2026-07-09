"""
    count_nucleotides(strand)

The count of each nucleotide within `strand` as a dictionary.

Invalid strands raise a `DomainError`.

"""
function count_nucleotides(strand)
    dict_counter = Dict(ch => 0 for ch in "ACGT")
    for ch in strand
        if haskey(dict_counter, ch)
                dict_counter[ch] += 1
        else
                throw(DomainError(1, "expects only A,C,G, or T"))
        end
    end
    return dict_counter
end
