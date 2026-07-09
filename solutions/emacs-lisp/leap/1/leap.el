;;; leap.el --- Leap exercise (exercism)  -*- lexical-binding: t; -*-

;;; Commentary:

(defun leap-year-p (year)
;;; Code:
  (setq x nil)
 (if (eq 0 (% year 4)) (setq x t))
 (if (eq 0 (% year 100)) (setq x nil))
 (if (eq 0 (% year 400)) (setq x t))
 x 
)

(provide 'leap-year-p)
;;; leap.el ends here
