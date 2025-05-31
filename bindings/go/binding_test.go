package tree_sitter_bottombracket_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-bottombracket"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_bottombracket.Language())
	if language == nil {
		t.Errorf("Error loading Bottombracket grammar")
	}
}
