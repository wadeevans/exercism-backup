;;; leap.el --- Leap exercise (exercism)  -*- lexical-binding: t; -*-

;;; Commentary:

(defun leap-year-p (year)
;;; Code:
  (or (= 0 (% year 400))
      (and (not (= 0 (% year 100)))
           (= 0 (% year 4))))) 


(provide 'leap-year-p)
;;; leap.el ends here
