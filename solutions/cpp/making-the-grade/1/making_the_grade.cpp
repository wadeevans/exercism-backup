#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    
    std::vector<int> student_scores_ints;
    for (int i = 0; i < student_scores.size(); i++)
    {
        
        student_scores_ints.emplace_back(static_cast<int> (student_scores[i]));    
    }
    return student_scores_ints;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    

    int failed {0};
    for (int i = 0; i < student_scores.size(); i++)
    {
        if (student_scores[i] <= 40)
        {
            failed++;
        }
            
    }
    return failed;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    
    std::vector<int> best {};
    for (int i = 0; i < student_scores.size(); i++)
    {
        if (student_scores[i] >= threshold)
        {
            best.emplace_back(student_scores[i]);
        }
            
    }
    return best;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    
    std::array<int, 4> grades{ 41, 56, 71, 86 };

    for (int i = 0; i < 4; i++)
    {
        grades[i] = 41 + (((highest_score - 40) / 4) * i);
    }
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    
    std::vector<std::string> ranking {};
   
    for (int i = 0; i < student_names.size(); i++)
    {
       std::string rank = std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]);
       ranking.emplace_back(rank); 
    }
    return ranking;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    
    std::string perfect = "";
    for (int i = 0; i < student_names.size(); i++)
    {
          if (student_scores[i] == 100)
          {
              perfect = student_names[i]; 
              return perfect;
          }
          
    }
    return perfect;
}
