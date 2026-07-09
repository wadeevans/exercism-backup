;;; two-fer.el --- Two-fer Exercise (exercism)  -*- lexical-binding: t; -*-

;;; Commentary:

(defun two-fer (&optional name)
;;; Code:
  (let ((greetee (or name "you")))
       (concat "One for " greetee ", one for me."))
)

(provide 'two-fer)
;;; two-fer.el ends here
