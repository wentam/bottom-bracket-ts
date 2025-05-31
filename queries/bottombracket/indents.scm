((parray) @indent.align
  (#set! indent.open_delimiter "[")
  (#set! indent.close_delimiter "]"))

;; TODO find a way to make the closing delimeter be not-indented.
;;
;; Currently I'm seeing:
;;
;; [foo
;;  ]
;;
;; When it should be
;;
;; [foo
;; ]
;;
;; But everything I've tried to override what indent.align does here fails.
;;
;; Can't use explicit indent.begin etc because we need 1-space indentation.
;;
;; Current text editor abstractions make the simple things hard, lol.
