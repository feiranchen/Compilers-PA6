// Generated from CubexParser2.g4 by ANTLR 4.1

   import java.util.*;

import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class CubexParser2 extends Parser {
	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		APPEND=42, CLASS=11, STAR=31, LRTHR=46, THR=43, WHILE=4, LONW=48, CLSINTF=17, 
		COMMENTS_POND=55, ONW=47, LANGLE=36, GTE=50, LBRACE=29, THING=13, FOR=5, 
		SPACE=56, LTE=49, LPAREN=25, IF=2, LBRACKET=21, RPAREN=26, LTHR=44, SLASH=32, 
		IN=6, COMMENTS=54, COMMA=27, EQUAL=24, RETURN=7, NOTHING=14, PLUS=34, 
		PIPE=40, VAR=19, SUPER=12, RBRACKET=22, RANGLE=37, DOT=41, RTHR=45, INTEGER=20, 
		INEQUAL=52, RBRACE=30, PERCENT=33, DASH=35, ELSE=3, AMPERSAND=39, SEMICOLON=28, 
		BANG=38, ERROR=57, TRUE=15, COLON=23, EQEQUAL=51, ASSIGN=53, INTERFACE=8, 
		TPARA=18, FUN=10, FALSE=16, EXTENDS=9, STRING=1;
	public static final String[] tokenNames = {
		"<INVALID>", "STRING", "'if'", "'else'", "'while'", "'for'", "'in'", "'return'", 
		"'interface'", "'extends'", "'fun'", "'class'", "'super'", "'Thing'", 
		"'Nothing'", "'true'", "'false'", "CLSINTF", "TPARA", "VAR", "INTEGER", 
		"'['", "']'", "':'", "'='", "'('", "')'", "','", "';'", "'{'", "'}'", 
		"'*'", "'/'", "'%'", "'+'", "'-'", "'<'", "'>'", "'!'", "'&'", "'|'", 
		"'.'", "'++'", "'..'", "'<.'", "'.<'", "'<<'", "'...'", "'<..'", "'<='", 
		"'>='", "'=='", "'!='", "':='", "COMMENTS", "COMMENTS_POND", "SPACE", 
		"ERROR"
	};
	public static final int
		RULE_vc = 0, RULE_vv = 1, RULE_kindcontext = 2, RULE_typecontext = 3, 
		RULE_paratype = 4, RULE_type_prime = 5, RULE_type = 6, RULE_typescheme = 7, 
		RULE_comprehension = 8, RULE_expr = 9, RULE_cexprs = 10, RULE_exprs = 11, 
		RULE_stat = 12, RULE_stats = 13, RULE_funBody = 14, RULE_intf = 15, RULE_cls = 16, 
		RULE_program = 17, RULE_progr = 18;
	public static final String[] ruleNames = {
		"vc", "vv", "kindcontext", "typecontext", "paratype", "type_prime", "type", 
		"typescheme", "comprehension", "expr", "cexprs", "exprs", "stat", "stats", 
		"funBody", "intf", "cls", "program", "progr"
	};

	@Override
	public String getGrammarFileName() { return "CubexParser2.g4"; }

	@Override
	public String[] getTokenNames() { return tokenNames; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public ATN getATN() { return _ATN; }




	public CubexParser2(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class VcContext extends ParserRuleContext {
		public CuVvc v;
		public Token vvv;
		public TerminalNode CLSINTF() { return getToken(CubexParser2.CLSINTF, 0); }
		public VcContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_vc; }
	}

	public final VcContext vc() throws RecognitionException {
		VcContext _localctx = new VcContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_vc);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(38); ((VcContext)_localctx).vvv = match(CLSINTF);
			((VcContext)_localctx).v =  new Vc((((VcContext)_localctx).vvv!=null?((VcContext)_localctx).vvv.getText():null));
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VvContext extends ParserRuleContext {
		public CuVvc v;
		public Token vvv;
		public TerminalNode VAR() { return getToken(CubexParser2.VAR, 0); }
		public VvContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_vv; }
	}

	public final VvContext vv() throws RecognitionException {
		VvContext _localctx = new VvContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_vv);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(41); ((VvContext)_localctx).vvv = match(VAR);
			((VvContext)_localctx).v =  new Vv((((VvContext)_localctx).vvv!=null?((VvContext)_localctx).vvv.getText():null) + "_");
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class KindcontextContext extends ParserRuleContext {
		public List<String> kc;
		public Token TPARA;
		public List<TerminalNode> COMMA() { return getTokens(CubexParser2.COMMA); }
		public List<TerminalNode> TPARA() { return getTokens(CubexParser2.TPARA); }
		public TerminalNode LANGLE() { return getToken(CubexParser2.LANGLE, 0); }
		public TerminalNode TPARA(int i) {
			return getToken(CubexParser2.TPARA, i);
		}
		public TerminalNode COMMA(int i) {
			return getToken(CubexParser2.COMMA, i);
		}
		public TerminalNode RANGLE() { return getToken(CubexParser2.RANGLE, 0); }
		public KindcontextContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_kindcontext; }
	}

	public final KindcontextContext kindcontext() throws RecognitionException {
		KindcontextContext _localctx = new KindcontextContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_kindcontext);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			((KindcontextContext)_localctx).kc =  new ArrayList<String>();
			setState(59);
			_la = _input.LA(1);
			if (_la==LANGLE) {
				{
				setState(45); match(LANGLE);
				setState(56);
				_la = _input.LA(1);
				if (_la==TPARA) {
					{
					setState(46); ((KindcontextContext)_localctx).TPARA = match(TPARA);
					 _localctx.kc.add((((KindcontextContext)_localctx).TPARA!=null?((KindcontextContext)_localctx).TPARA.getText():null)); 
					setState(53);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==COMMA) {
						{
						{
						setState(48); match(COMMA);
						setState(49); ((KindcontextContext)_localctx).TPARA = match(TPARA);
						 _localctx.kc.add((((KindcontextContext)_localctx).TPARA!=null?((KindcontextContext)_localctx).TPARA.getText():null)); 
						}
						}
						setState(55);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
				}

				setState(58); match(RANGLE);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypecontextContext extends ParserRuleContext {
		public Map<String,CuType> tc;
		public Token VAR;
		public TypeContext t;
		public TerminalNode VAR(int i) {
			return getToken(CubexParser2.VAR, i);
		}
		public List<TerminalNode> COMMA() { return getTokens(CubexParser2.COMMA); }
		public List<TerminalNode> VAR() { return getTokens(CubexParser2.VAR); }
		public TerminalNode RPAREN() { return getToken(CubexParser2.RPAREN, 0); }
		public TypeContext type(int i) {
			return getRuleContext(TypeContext.class,i);
		}
		public List<TypeContext> type() {
			return getRuleContexts(TypeContext.class);
		}
		public TerminalNode COLON(int i) {
			return getToken(CubexParser2.COLON, i);
		}
		public TerminalNode LPAREN() { return getToken(CubexParser2.LPAREN, 0); }
		public List<TerminalNode> COLON() { return getTokens(CubexParser2.COLON); }
		public TerminalNode COMMA(int i) {
			return getToken(CubexParser2.COMMA, i);
		}
		public TypecontextContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typecontext; }
	}

	public final TypecontextContext typecontext() throws RecognitionException {
		TypecontextContext _localctx = new TypecontextContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_typecontext);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			((TypecontextContext)_localctx).tc =  new LinkedHashMap<String,CuType>(); 
			setState(62); match(LPAREN);
			setState(78);
			_la = _input.LA(1);
			if (_la==VAR) {
				{
				setState(63); ((TypecontextContext)_localctx).VAR = match(VAR);
				setState(64); match(COLON);
				setState(65); ((TypecontextContext)_localctx).t = type();
				 _localctx.tc.put((((TypecontextContext)_localctx).VAR!=null?((TypecontextContext)_localctx).VAR.getText():null) + "_", ((TypecontextContext)_localctx).t.t); 
				setState(75);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(67); match(COMMA);
					setState(68); ((TypecontextContext)_localctx).VAR = match(VAR);
					setState(69); match(COLON);
					setState(70); ((TypecontextContext)_localctx).t = type();
					 _localctx.tc.put((((TypecontextContext)_localctx).VAR!=null?((TypecontextContext)_localctx).VAR.getText():null) + "_", ((TypecontextContext)_localctx).t.t); 
					}
					}
					setState(77);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(80); match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParatypeContext extends ParserRuleContext {
		public List<CuType> pt;
		public TypeContext t;
		public List<TerminalNode> COMMA() { return getTokens(CubexParser2.COMMA); }
		public TypeContext type(int i) {
			return getRuleContext(TypeContext.class,i);
		}
		public List<TypeContext> type() {
			return getRuleContexts(TypeContext.class);
		}
		public TerminalNode LANGLE() { return getToken(CubexParser2.LANGLE, 0); }
		public TerminalNode COMMA(int i) {
			return getToken(CubexParser2.COMMA, i);
		}
		public TerminalNode RANGLE() { return getToken(CubexParser2.RANGLE, 0); }
		public ParatypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_paratype; }
	}

	public final ParatypeContext paratype() throws RecognitionException {
		ParatypeContext _localctx = new ParatypeContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_paratype);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			((ParatypeContext)_localctx).pt =  new ArrayList<CuType>(); 
			setState(98);
			_la = _input.LA(1);
			if (_la==LANGLE) {
				{
				setState(83); match(LANGLE);
				setState(95);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << THING) | (1L << NOTHING) | (1L << CLSINTF) | (1L << TPARA))) != 0)) {
					{
					setState(84); ((ParatypeContext)_localctx).t = type();
					_localctx.pt.add(((ParatypeContext)_localctx).t.t);
					setState(92);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==COMMA) {
						{
						{
						setState(86); match(COMMA);
						setState(87); ((ParatypeContext)_localctx).t = type();
						_localctx.pt.add(((ParatypeContext)_localctx).t.t);
						}
						}
						setState(94);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
				}

				setState(97); match(RANGLE);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Type_primeContext extends ParserRuleContext {
		public CuType t;
		public Token v;
		public Token CLSINTF;
		public ParatypeContext p;
		public TerminalNode TPARA() { return getToken(CubexParser2.TPARA, 0); }
		public TerminalNode CLSINTF() { return getToken(CubexParser2.CLSINTF, 0); }
		public TerminalNode THING() { return getToken(CubexParser2.THING, 0); }
		public ParatypeContext paratype() {
			return getRuleContext(ParatypeContext.class,0);
		}
		public TerminalNode NOTHING() { return getToken(CubexParser2.NOTHING, 0); }
		public Type_primeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_prime; }
	}

	public final Type_primeContext type_prime() throws RecognitionException {
		Type_primeContext _localctx = new Type_primeContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_type_prime);
		try {
			setState(110);
			switch (_input.LA(1)) {
			case TPARA:
				enterOuterAlt(_localctx, 1);
				{
				setState(100); ((Type_primeContext)_localctx).v = match(TPARA);
				((Type_primeContext)_localctx).t =  new VTypePara((((Type_primeContext)_localctx).v!=null?((Type_primeContext)_localctx).v.getText():null));
				}
				break;
			case THING:
				enterOuterAlt(_localctx, 2);
				{
				setState(102); match(THING);
				((Type_primeContext)_localctx).t =  new Top();
				}
				break;
			case NOTHING:
				enterOuterAlt(_localctx, 3);
				{
				setState(104); match(NOTHING);
				((Type_primeContext)_localctx).t =  new Bottom();
				}
				break;
			case CLSINTF:
				enterOuterAlt(_localctx, 4);
				{
				setState(106); ((Type_primeContext)_localctx).CLSINTF = match(CLSINTF);
				setState(107); ((Type_primeContext)_localctx).p = paratype();
				((Type_primeContext)_localctx).t =  ((((Type_primeContext)_localctx).CLSINTF!=null?((Type_primeContext)_localctx).CLSINTF.getText():null).equals("Iterable"))? new Iter(((Type_primeContext)_localctx).p.pt) : new VClass((((Type_primeContext)_localctx).CLSINTF!=null?((Type_primeContext)_localctx).CLSINTF.getText():null), ((Type_primeContext)_localctx).p.pt);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeContext extends ParserRuleContext {
		public CuType t;
		public Type_primeContext v;
		public Type_primeContext l;
		public Type_primeContext r1;
		public List<TerminalNode> AMPERSAND() { return getTokens(CubexParser2.AMPERSAND); }
		public Type_primeContext type_prime(int i) {
			return getRuleContext(Type_primeContext.class,i);
		}
		public TerminalNode AMPERSAND(int i) {
			return getToken(CubexParser2.AMPERSAND, i);
		}
		public List<Type_primeContext> type_prime() {
			return getRuleContexts(Type_primeContext.class);
		}
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_type);
		int _la;
		try {
			setState(125);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(112); ((TypeContext)_localctx).v = type_prime();
				((TypeContext)_localctx).t =  ((TypeContext)_localctx).v.t;
				}
				break;

			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(115); ((TypeContext)_localctx).l = type_prime();
				((TypeContext)_localctx).t =  new VTypeInter(((TypeContext)_localctx).l.t);
				setState(121); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(117); match(AMPERSAND);
					setState(118); ((TypeContext)_localctx).r1 = type_prime();
					_localctx.t.add(((TypeContext)_localctx).r1.t);
					}
					}
					setState(123); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==AMPERSAND );
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeschemeContext extends ParserRuleContext {
		public CuTypeScheme ts;
		public KindcontextContext kc;
		public TypecontextContext tc;
		public TypeContext t;
		public TypecontextContext typecontext() {
			return getRuleContext(TypecontextContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public KindcontextContext kindcontext() {
			return getRuleContext(KindcontextContext.class,0);
		}
		public TerminalNode COLON() { return getToken(CubexParser2.COLON, 0); }
		public TypeschemeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typescheme; }
	}

	public final TypeschemeContext typescheme() throws RecognitionException {
		TypeschemeContext _localctx = new TypeschemeContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_typescheme);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(127); ((TypeschemeContext)_localctx).kc = kindcontext();
			setState(128); ((TypeschemeContext)_localctx).tc = typecontext();
			setState(129); match(COLON);
			setState(130); ((TypeschemeContext)_localctx).t = type();
			((TypeschemeContext)_localctx).ts =  new TypeScheme(((TypeschemeContext)_localctx).kc.kc, ((TypeschemeContext)_localctx).tc.tc, ((TypeschemeContext)_localctx).t.t);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ComprehensionContext extends ParserRuleContext {
		public CuComprehension c;
		public ExprContext e;
		public ComprehensionContext c_;
		public VvContext v_;
		public TerminalNode IN() { return getToken(CubexParser2.IN, 0); }
		public TerminalNode IF() { return getToken(CubexParser2.IF, 0); }
		public ComprehensionContext comprehension() {
			return getRuleContext(ComprehensionContext.class,0);
		}
		public TerminalNode FOR() { return getToken(CubexParser2.FOR, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public VvContext vv() {
			return getRuleContext(VvContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(CubexParser2.COMMA, 0); }
		public TerminalNode RPAREN() { return getToken(CubexParser2.RPAREN, 0); }
		public TerminalNode LPAREN() { return getToken(CubexParser2.LPAREN, 0); }
		public ComprehensionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comprehension; }
	}

	public final ComprehensionContext comprehension() throws RecognitionException {
		ComprehensionContext _localctx = new ComprehensionContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_comprehension);
		int _la;
		try {
			setState(163);
			switch (_input.LA(1)) {
			case STRING:
			case TRUE:
			case FALSE:
			case CLSINTF:
			case VAR:
			case INTEGER:
			case LBRACKET:
			case LPAREN:
			case DASH:
			case BANG:
				enterOuterAlt(_localctx, 1);
				{
				setState(133); ((ComprehensionContext)_localctx).e = expr(0);
				((ComprehensionContext)_localctx).c =  new ExprLstCmph(((ComprehensionContext)_localctx).e.e);
				setState(139);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(135); match(COMMA);
					setState(136); ((ComprehensionContext)_localctx).c_ = comprehension();
					_localctx.c.add(((ComprehensionContext)_localctx).c_.c);
					}
				}

				}
				break;
			case IF:
				enterOuterAlt(_localctx, 2);
				{
				setState(141); match(IF);
				setState(142); match(LPAREN);
				setState(143); ((ComprehensionContext)_localctx).e = expr(0);
				setState(144); match(RPAREN);
				((ComprehensionContext)_localctx).c =  new IfCmph(((ComprehensionContext)_localctx).e.e);
				setState(149);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << STRING) | (1L << IF) | (1L << FOR) | (1L << TRUE) | (1L << FALSE) | (1L << CLSINTF) | (1L << VAR) | (1L << INTEGER) | (1L << LBRACKET) | (1L << LPAREN) | (1L << DASH) | (1L << BANG))) != 0)) {
					{
					setState(146); ((ComprehensionContext)_localctx).c_ = comprehension();
					_localctx.c.add(((ComprehensionContext)_localctx).c_.c);
					}
				}

				}
				break;
			case FOR:
				enterOuterAlt(_localctx, 3);
				{
				setState(151); match(FOR);
				setState(152); match(LPAREN);
				setState(153); ((ComprehensionContext)_localctx).v_ = vv();
				setState(154); match(IN);
				setState(155); ((ComprehensionContext)_localctx).e = expr(0);
				setState(156); match(RPAREN);
				((ComprehensionContext)_localctx).c =  new ForCmph(((ComprehensionContext)_localctx).v_.v, ((ComprehensionContext)_localctx).e.e);
				setState(161);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << STRING) | (1L << IF) | (1L << FOR) | (1L << TRUE) | (1L << FALSE) | (1L << CLSINTF) | (1L << VAR) | (1L << INTEGER) | (1L << LBRACKET) | (1L << LPAREN) | (1L << DASH) | (1L << BANG))) != 0)) {
					{
					setState(158); ((ComprehensionContext)_localctx).c_ = comprehension();
					_localctx.c.add(((ComprehensionContext)_localctx).c_.c);
					}
				}

				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public int _p;
		public CuExpr e;
		public ExprContext ex;
		public ExprContext l;
		public Token op;
		public Token VAR;
		public ParatypeContext pt;
		public ExprsContext es;
		public Token CLSINTF;
		public Token INTEGER;
		public Token STRING;
		public ComprehensionContext c_;
		public ExprContext r;
		public TerminalNode APPEND() { return getToken(CubexParser2.APPEND, 0); }
		public ComprehensionContext comprehension() {
			return getRuleContext(ComprehensionContext.class,0);
		}
		public TerminalNode TRUE() { return getToken(CubexParser2.TRUE, 0); }
		public TerminalNode CLSINTF() { return getToken(CubexParser2.CLSINTF, 0); }
		public TerminalNode LANGLE() { return getToken(CubexParser2.LANGLE, 0); }
		public TerminalNode STAR() { return getToken(CubexParser2.STAR, 0); }
		public TerminalNode RBRACKET() { return getToken(CubexParser2.RBRACKET, 0); }
		public TerminalNode AMPERSAND() { return getToken(CubexParser2.AMPERSAND, 0); }
		public TerminalNode RTHR() { return getToken(CubexParser2.RTHR, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public TerminalNode VAR() { return getToken(CubexParser2.VAR, 0); }
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode PLUS() { return getToken(CubexParser2.PLUS, 0); }
		public TerminalNode LRTHR() { return getToken(CubexParser2.LRTHR, 0); }
		public TerminalNode ONW() { return getToken(CubexParser2.ONW, 0); }
		public ExprsContext exprs() {
			return getRuleContext(ExprsContext.class,0);
		}
		public TerminalNode PIPE() { return getToken(CubexParser2.PIPE, 0); }
		public TerminalNode GTE() { return getToken(CubexParser2.GTE, 0); }
		public TerminalNode PERCENT() { return getToken(CubexParser2.PERCENT, 0); }
		public TerminalNode LTE() { return getToken(CubexParser2.LTE, 0); }
		public TerminalNode BANG() { return getToken(CubexParser2.BANG, 0); }
		public TerminalNode DASH() { return getToken(CubexParser2.DASH, 0); }
		public TerminalNode LPAREN() { return getToken(CubexParser2.LPAREN, 0); }
		public TerminalNode LBRACKET() { return getToken(CubexParser2.LBRACKET, 0); }
		public TerminalNode INEQUAL() { return getToken(CubexParser2.INEQUAL, 0); }
		public TerminalNode EQEQUAL() { return getToken(CubexParser2.EQEQUAL, 0); }
		public TerminalNode RANGLE() { return getToken(CubexParser2.RANGLE, 0); }
		public TerminalNode DOT() { return getToken(CubexParser2.DOT, 0); }
		public TerminalNode LONW() { return getToken(CubexParser2.LONW, 0); }
		public TerminalNode RPAREN() { return getToken(CubexParser2.RPAREN, 0); }
		public TerminalNode LTHR() { return getToken(CubexParser2.LTHR, 0); }
		public ParatypeContext paratype() {
			return getRuleContext(ParatypeContext.class,0);
		}
		public TerminalNode INTEGER() { return getToken(CubexParser2.INTEGER, 0); }
		public TerminalNode STRING() { return getToken(CubexParser2.STRING, 0); }
		public TerminalNode SLASH() { return getToken(CubexParser2.SLASH, 0); }
		public TerminalNode FALSE() { return getToken(CubexParser2.FALSE, 0); }
		public TerminalNode THR() { return getToken(CubexParser2.THR, 0); }
		public ExprContext(ParserRuleContext parent, int invokingState) { super(parent, invokingState); }
		public ExprContext(ParserRuleContext parent, int invokingState, int _p) {
			super(parent, invokingState);
			this._p = _p;
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	}

	public final ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState, _p);
		ExprContext _prevctx = _localctx;
		int _startState = 18;
		enterRecursionRule(_localctx, RULE_expr);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(208);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				setState(166);
				((ExprContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==DASH || _la==BANG) ) {
					((ExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				consume();
				setState(167); ((ExprContext)_localctx).ex = expr(10);
				 ((ExprContext)_localctx).e =  (((ExprContext)_localctx).op!=null?((ExprContext)_localctx).op.getType():0) == DASH ? new NegativeExpr(((ExprContext)_localctx).ex.e) : new NegateExpr(((ExprContext)_localctx).ex.e); 
				}
				break;

			case 2:
				{
				setState(170); match(LPAREN);
				setState(171); ((ExprContext)_localctx).ex = expr(0);
				setState(172); match(RPAREN);
				((ExprContext)_localctx).e =  ((ExprContext)_localctx).ex.e;
				}
				break;

			case 3:
				{
				setState(175); ((ExprContext)_localctx).VAR = match(VAR);
				((ExprContext)_localctx).e =  new VvExp((((ExprContext)_localctx).VAR!=null?((ExprContext)_localctx).VAR.getText():null) + "_");
				setState(183);
				switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
				case 1:
					{
					setState(177); ((ExprContext)_localctx).pt = paratype();
					setState(178); match(LPAREN);
					setState(179); ((ExprContext)_localctx).es = exprs();
					setState(180); match(RPAREN);
					_localctx.e.add(((ExprContext)_localctx).pt.pt, ((ExprContext)_localctx).es.cu);
					}
					break;
				}
				}
				break;

			case 4:
				{
				setState(185); ((ExprContext)_localctx).CLSINTF = match(CLSINTF);
				setState(186); ((ExprContext)_localctx).pt = paratype();
				setState(187); match(LPAREN);
				setState(188); ((ExprContext)_localctx).es = exprs();
				setState(189); match(RPAREN);
				((ExprContext)_localctx).e =  new VcExp((((ExprContext)_localctx).CLSINTF!=null?((ExprContext)_localctx).CLSINTF.getText():null), ((ExprContext)_localctx).pt.pt, ((ExprContext)_localctx).es.cu);
				}
				break;

			case 5:
				{
				setState(192); match(TRUE);
				((ExprContext)_localctx).e =  new CBoolean(true);
				}
				break;

			case 6:
				{
				setState(194); match(FALSE);
				((ExprContext)_localctx).e =  new CBoolean(false);
				}
				break;

			case 7:
				{
				setState(196); ((ExprContext)_localctx).INTEGER = match(INTEGER);
				((ExprContext)_localctx).e =  new CInteger((((ExprContext)_localctx).INTEGER!=null?Integer.valueOf(((ExprContext)_localctx).INTEGER.getText()):0));
				}
				break;

			case 8:
				{
				setState(198); ((ExprContext)_localctx).STRING = match(STRING);
				((ExprContext)_localctx).e =  new CString((((ExprContext)_localctx).STRING!=null?((ExprContext)_localctx).STRING.getText():null));
				}
				break;

			case 9:
				{
				setState(200); match(LBRACKET);
				setState(201); match(RBRACKET);
				((ExprContext)_localctx).e = new ComExpr(new EmptyCmph());
				}
				break;

			case 10:
				{
				setState(203); match(LBRACKET);
				setState(204); ((ExprContext)_localctx).c_ = comprehension();
				setState(205); match(RBRACKET);
				((ExprContext)_localctx).e =  new ComExpr(((ExprContext)_localctx).c_.c);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(264);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			while ( _alt!=2 && _alt!=-1 ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(262);
					switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
					case 1:
						{
						_localctx = new ExprContext(_parentctx, _parentState, _p);
						_localctx.l = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(210);
						if (!(9 >= _localctx._p)) throw new FailedPredicateException(this, "9 >= $_p");
						setState(211);
						((ExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << STAR) | (1L << SLASH) | (1L << PERCENT))) != 0)) ) {
							((ExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						consume();
						setState(212); ((ExprContext)_localctx).r = expr(10);
						 ((ExprContext)_localctx).e =  (((ExprContext)_localctx).op!=null?((ExprContext)_localctx).op.getType():0) == STAR ? new TimesExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e)
						                                    : (((ExprContext)_localctx).op!=null?((ExprContext)_localctx).op.getType():0) == SLASH ? new DivideExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e)
						                                                        : new ModuloExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e); 
						}
						break;

					case 2:
						{
						_localctx = new ExprContext(_parentctx, _parentState, _p);
						_localctx.l = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(215);
						if (!(8 >= _localctx._p)) throw new FailedPredicateException(this, "8 >= $_p");
						setState(216);
						((ExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==DASH) ) {
							((ExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						consume();
						setState(217); ((ExprContext)_localctx).r = expr(9);
						 ((ExprContext)_localctx).e =  ((((ExprContext)_localctx).op!=null?((ExprContext)_localctx).op.getType():0) == PLUS)
						                       ? new PlusExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e)
						                       : new MinusExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e); 
						}
						break;

					case 3:
						{
						_localctx = new ExprContext(_parentctx, _parentState, _p);
						_localctx.l = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(220);
						if (!(7 >= _localctx._p)) throw new FailedPredicateException(this, "7 >= $_p");
						setState(221);
						((ExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << THR) | (1L << LTHR) | (1L << RTHR) | (1L << LRTHR))) != 0)) ) {
							((ExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						consume();
						setState(222); ((ExprContext)_localctx).r = expr(8);
						((ExprContext)_localctx).e =  ((((ExprContext)_localctx).op!=null?((ExprContext)_localctx).op.getType():0) == THR) ? new ThroughExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e, true, true) 
						                                      : ((((ExprContext)_localctx).op!=null?((ExprContext)_localctx).op.getType():0) == LTHR) 
						                                            ? new ThroughExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e, false, true) 
						                                            : ((((ExprContext)_localctx).op!=null?((ExprContext)_localctx).op.getType():0) == RTHR) 
						                                                ? new ThroughExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e, true, false)
						                                                : new ThroughExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e, false, false);
						}
						break;

					case 4:
						{
						_localctx = new ExprContext(_parentctx, _parentState, _p);
						_localctx.l = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(225);
						if (!(5 >= _localctx._p)) throw new FailedPredicateException(this, "5 >= $_p");
						setState(226);
						((ExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << LANGLE) | (1L << RANGLE) | (1L << LTE) | (1L << GTE))) != 0)) ) {
							((ExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						consume();
						setState(227); ((ExprContext)_localctx).r = expr(6);
						((ExprContext)_localctx).e =  ((((ExprContext)_localctx).op!=null?((ExprContext)_localctx).op.getType():0) == LANGLE) 
						                  ? new LessThanExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e, true) 
						                  : ((((ExprContext)_localctx).op!=null?((ExprContext)_localctx).op.getType():0) == LTE) 
						                      ? new LessThanExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e, false) 
						                      : ((((ExprContext)_localctx).op!=null?((ExprContext)_localctx).op.getType():0) == RANGLE) 
						                          ? new GreaterThanExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e, true)
						                          : new GreaterThanExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e, false);
						}
						break;

					case 5:
						{
						_localctx = new ExprContext(_parentctx, _parentState, _p);
						_localctx.l = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(230);
						if (!(4 >= _localctx._p)) throw new FailedPredicateException(this, "4 >= $_p");
						setState(231);
						((ExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==EQEQUAL || _la==INEQUAL) ) {
							((ExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						consume();
						setState(232); ((ExprContext)_localctx).r = expr(5);
						((ExprContext)_localctx).e =  ((((ExprContext)_localctx).op!=null?((ExprContext)_localctx).op.getType():0) == EQEQUAL) 
						                 ? new EqualExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e, true) 
						                 : new EqualExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e, false);
						}
						break;

					case 6:
						{
						_localctx = new ExprContext(_parentctx, _parentState, _p);
						_localctx.l = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(235);
						if (!(3 >= _localctx._p)) throw new FailedPredicateException(this, "3 >= $_p");
						setState(236); match(AMPERSAND);
						setState(237); ((ExprContext)_localctx).r = expr(4);
						 ((ExprContext)_localctx).e =  new AndExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e); 
						}
						break;

					case 7:
						{
						_localctx = new ExprContext(_parentctx, _parentState, _p);
						_localctx.l = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(240);
						if (!(2 >= _localctx._p)) throw new FailedPredicateException(this, "2 >= $_p");
						setState(241); match(PIPE);
						setState(242); ((ExprContext)_localctx).r = expr(3);
						 ((ExprContext)_localctx).e =  new OrExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e); 
						}
						break;

					case 8:
						{
						_localctx = new ExprContext(_parentctx, _parentState, _p);
						_localctx.l = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(245);
						if (!(1 >= _localctx._p)) throw new FailedPredicateException(this, "1 >= $_p");
						setState(246); match(APPEND);
						setState(247); ((ExprContext)_localctx).r = expr(2);
						((ExprContext)_localctx).e =  new AppExpr(((ExprContext)_localctx).l.e, ((ExprContext)_localctx).r.e); 
						}
						break;

					case 9:
						{
						_localctx = new ExprContext(_parentctx, _parentState, _p);
						_localctx.ex = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(250);
						if (!(17 >= _localctx._p)) throw new FailedPredicateException(this, "17 >= $_p");
						setState(251); match(DOT);
						setState(252); ((ExprContext)_localctx).VAR = match(VAR);
						setState(253); ((ExprContext)_localctx).pt = paratype();
						setState(254); match(LPAREN);
						setState(255); ((ExprContext)_localctx).es = exprs();
						setState(256); match(RPAREN);
						((ExprContext)_localctx).e =  new VarExpr(((ExprContext)_localctx).ex.e, (((ExprContext)_localctx).VAR!=null?((ExprContext)_localctx).VAR.getText():null), ((ExprContext)_localctx).pt.pt, ((ExprContext)_localctx).es.cu);
						}
						break;

					case 10:
						{
						_localctx = new ExprContext(_parentctx, _parentState, _p);
						_localctx.ex = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(259);
						if (!(6 >= _localctx._p)) throw new FailedPredicateException(this, "6 >= $_p");
						setState(260);
						((ExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==ONW || _la==LONW) ) {
							((ExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						consume();
						((ExprContext)_localctx).e =  ((((ExprContext)_localctx).op!=null?((ExprContext)_localctx).op.getType():0) == ONW) ? new OnwardsExpr(((ExprContext)_localctx).ex.e, true) : new OnwardsExpr(((ExprContext)_localctx).ex.e, false);
						}
						break;
					}
					} 
				}
				setState(266);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class CexprsContext extends ParserRuleContext {
		public List<CuExpr> cu;
		public ExprContext e;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public List<TerminalNode> COMMA() { return getTokens(CubexParser2.COMMA); }
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode COMMA(int i) {
			return getToken(CubexParser2.COMMA, i);
		}
		public CexprsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cexprs; }
	}

	public final CexprsContext cexprs() throws RecognitionException {
		CexprsContext _localctx = new CexprsContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_cexprs);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			((CexprsContext)_localctx).cu =  new ArrayList<CuExpr>();
			setState(268); ((CexprsContext)_localctx).e = expr(0);
			_localctx.cu.add(((CexprsContext)_localctx).e.e);
			setState(279);
			switch ( getInterpreter().adaptivePredict(_input,20,_ctx) ) {
			case 1:
				{
				setState(276);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(270); match(COMMA);
					setState(271); ((CexprsContext)_localctx).e = expr(0);
					_localctx.cu.add(((CexprsContext)_localctx).e.e);
					}
					}
					setState(278);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprsContext extends ParserRuleContext {
		public List<CuExpr> cu;
		public ExprContext e;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public List<TerminalNode> COMMA() { return getTokens(CubexParser2.COMMA); }
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode COMMA(int i) {
			return getToken(CubexParser2.COMMA, i);
		}
		public ExprsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exprs; }
	}

	public final ExprsContext exprs() throws RecognitionException {
		ExprsContext _localctx = new ExprsContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_exprs);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			((ExprsContext)_localctx).cu =  new ArrayList<CuExpr>();
			setState(293);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << STRING) | (1L << TRUE) | (1L << FALSE) | (1L << CLSINTF) | (1L << VAR) | (1L << INTEGER) | (1L << LBRACKET) | (1L << LPAREN) | (1L << DASH) | (1L << BANG))) != 0)) {
				{
				setState(282); ((ExprsContext)_localctx).e = expr(0);
				_localctx.cu.add(((ExprsContext)_localctx).e.e);
				setState(290);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(284); match(COMMA);
					setState(285); ((ExprsContext)_localctx).e = expr(0);
					_localctx.cu.add(((ExprsContext)_localctx).e.e);
					}
					}
					setState(292);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatContext extends ParserRuleContext {
		public CuStat s;
		public StatsContext ss;
		public VvContext v;
		public ExprContext e;
		public StatContext l;
		public StatContext r;
		public StatContext st;
		public TerminalNode LBRACE() { return getToken(CubexParser2.LBRACE, 0); }
		public TerminalNode SEMICOLON() { return getToken(CubexParser2.SEMICOLON, 0); }
		public VvContext vv() {
			return getRuleContext(VvContext.class,0);
		}
		public TerminalNode EQUAL() { return getToken(CubexParser2.EQUAL, 0); }
		public TerminalNode RBRACE() { return getToken(CubexParser2.RBRACE, 0); }
		public TerminalNode LPAREN() { return getToken(CubexParser2.LPAREN, 0); }
		public TerminalNode IN() { return getToken(CubexParser2.IN, 0); }
		public TerminalNode WHILE() { return getToken(CubexParser2.WHILE, 0); }
		public TerminalNode IF() { return getToken(CubexParser2.IF, 0); }
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public TerminalNode FOR() { return getToken(CubexParser2.FOR, 0); }
		public TerminalNode ELSE() { return getToken(CubexParser2.ELSE, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(CubexParser2.ASSIGN, 0); }
		public TerminalNode RPAREN() { return getToken(CubexParser2.RPAREN, 0); }
		public TerminalNode RETURN() { return getToken(CubexParser2.RETURN, 0); }
		public StatsContext stats() {
			return getRuleContext(StatsContext.class,0);
		}
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public StatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stat; }
	}

	public final StatContext stat() throws RecognitionException {
		StatContext _localctx = new StatContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_stat);
		int _la;
		try {
			setState(339);
			switch (_input.LA(1)) {
			case LBRACE:
				enterOuterAlt(_localctx, 1);
				{
				setState(295); match(LBRACE);
				setState(296); ((StatContext)_localctx).ss = stats();
				setState(297); match(RBRACE);
				((StatContext)_localctx).s =  new Stats(((StatContext)_localctx).ss.cu);
				}
				break;
			case VAR:
				enterOuterAlt(_localctx, 2);
				{
				setState(300); ((StatContext)_localctx).v = vv();
				setState(301); match(ASSIGN);
				setState(302); ((StatContext)_localctx).e = expr(0);
				setState(303); match(SEMICOLON);
				((StatContext)_localctx).s =  new AssignStat(((StatContext)_localctx).v.v, ((StatContext)_localctx).e.e);
				}
				break;
			case IF:
				enterOuterAlt(_localctx, 3);
				{
				setState(306); match(IF);
				setState(307); match(LPAREN);
				setState(308); ((StatContext)_localctx).e = expr(0);
				setState(309); match(RPAREN);
				setState(310); ((StatContext)_localctx).l = stat();
				((StatContext)_localctx).s =  new IfStat(((StatContext)_localctx).e.e, ((StatContext)_localctx).l.s);
				setState(316);
				switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
				case 1:
					{
					setState(312); match(ELSE);
					setState(313); ((StatContext)_localctx).r = stat();
					_localctx.s.add(((StatContext)_localctx).r.s);
					}
					break;
				}
				}
				break;
			case WHILE:
				enterOuterAlt(_localctx, 4);
				{
				setState(318); match(WHILE);
				setState(319); match(LPAREN);
				setState(320); ((StatContext)_localctx).e = expr(0);
				setState(321); match(RPAREN);
				setState(322); ((StatContext)_localctx).st = stat();
				((StatContext)_localctx).s =  new WhileStat(((StatContext)_localctx).e.e, ((StatContext)_localctx).st.s);
				}
				break;
			case FOR:
				enterOuterAlt(_localctx, 5);
				{
				setState(325); match(FOR);
				setState(326); match(LPAREN);
				setState(327); ((StatContext)_localctx).v = vv();
				setState(328); match(IN);
				setState(329); ((StatContext)_localctx).e = expr(0);
				setState(330); match(RPAREN);
				setState(331); ((StatContext)_localctx).st = stat();
				((StatContext)_localctx).s =  new ForStat(((StatContext)_localctx).v.v, ((StatContext)_localctx).e.e, ((StatContext)_localctx).st.s);
				}
				break;
			case RETURN:
			case EQUAL:
				enterOuterAlt(_localctx, 6);
				{
				setState(334);
				_la = _input.LA(1);
				if ( !(_la==RETURN || _la==EQUAL) ) {
				_errHandler.recoverInline(this);
				}
				consume();
				setState(335); ((StatContext)_localctx).e = expr(0);
				setState(336); match(SEMICOLON);
				((StatContext)_localctx).s =  new ReturnStat(((StatContext)_localctx).e.e);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatsContext extends ParserRuleContext {
		public List<CuStat> cu;
		public StatContext s;
		public StatContext ss;
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public StatsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stats; }
	}

	public final StatsContext stats() throws RecognitionException {
		StatsContext _localctx = new StatsContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_stats);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			((StatsContext)_localctx).cu =  new ArrayList<CuStat>();
			setState(352);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << IF) | (1L << WHILE) | (1L << FOR) | (1L << RETURN) | (1L << VAR) | (1L << EQUAL) | (1L << LBRACE))) != 0)) {
				{
				setState(342); ((StatsContext)_localctx).s = stat();
				_localctx.cu.add(((StatsContext)_localctx).s.s);
				setState(349);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << IF) | (1L << WHILE) | (1L << FOR) | (1L << RETURN) | (1L << VAR) | (1L << EQUAL) | (1L << LBRACE))) != 0)) {
					{
					{
					setState(344); ((StatsContext)_localctx).ss = stat();
					_localctx.cu.add(((StatsContext)_localctx).ss.s);
					}
					}
					setState(351);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunBodyContext extends ParserRuleContext {
		public CuStat body;
		public StatContext s;
		public TerminalNode SEMICOLON() { return getToken(CubexParser2.SEMICOLON, 0); }
		public StatContext stat() {
			return getRuleContext(StatContext.class,0);
		}
		public FunBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_funBody; }
	}

	public final FunBodyContext funBody() throws RecognitionException {
		FunBodyContext _localctx = new FunBodyContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_funBody);
		try {
			setState(359);
			switch (_input.LA(1)) {
			case SEMICOLON:
				enterOuterAlt(_localctx, 1);
				{
				setState(354); match(SEMICOLON);
				((FunBodyContext)_localctx).body = new EmptyBody();
				}
				break;
			case IF:
			case WHILE:
			case FOR:
			case RETURN:
			case VAR:
			case EQUAL:
			case LBRACE:
				enterOuterAlt(_localctx, 2);
				{
				setState(356); ((FunBodyContext)_localctx).s = stat();
				((FunBodyContext)_localctx).body = ((FunBodyContext)_localctx).s.s;
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IntfContext extends ParserRuleContext {
		public CuClass c;
		public Token CLSINTF;
		public KindcontextContext p;
		public TypeContext t;
		public Token VAR;
		public TypeschemeContext ts;
		public FunBodyContext f;
		public TerminalNode VAR(int i) {
			return getToken(CubexParser2.VAR, i);
		}
		public TerminalNode LBRACE() { return getToken(CubexParser2.LBRACE, 0); }
		public List<TerminalNode> FUN() { return getTokens(CubexParser2.FUN); }
		public TerminalNode CLSINTF() { return getToken(CubexParser2.CLSINTF, 0); }
		public KindcontextContext kindcontext() {
			return getRuleContext(KindcontextContext.class,0);
		}
		public List<TypeschemeContext> typescheme() {
			return getRuleContexts(TypeschemeContext.class);
		}
		public TerminalNode RBRACE() { return getToken(CubexParser2.RBRACE, 0); }
		public List<FunBodyContext> funBody() {
			return getRuleContexts(FunBodyContext.class);
		}
		public FunBodyContext funBody(int i) {
			return getRuleContext(FunBodyContext.class,i);
		}
		public List<TerminalNode> VAR() { return getTokens(CubexParser2.VAR); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TypeschemeContext typescheme(int i) {
			return getRuleContext(TypeschemeContext.class,i);
		}
		public TerminalNode INTERFACE() { return getToken(CubexParser2.INTERFACE, 0); }
		public TerminalNode FUN(int i) {
			return getToken(CubexParser2.FUN, i);
		}
		public TerminalNode EXTENDS() { return getToken(CubexParser2.EXTENDS, 0); }
		public IntfContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_intf; }
	}

	public final IntfContext intf() throws RecognitionException {
		IntfContext _localctx = new IntfContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_intf);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(361); match(INTERFACE);
			setState(362); ((IntfContext)_localctx).CLSINTF = match(CLSINTF);
			setState(363); ((IntfContext)_localctx).p = kindcontext();
			((IntfContext)_localctx).c =  new Intf((((IntfContext)_localctx).CLSINTF!=null?((IntfContext)_localctx).CLSINTF.getText():null), ((IntfContext)_localctx).p.kc); 
			setState(369);
			_la = _input.LA(1);
			if (_la==EXTENDS) {
				{
				setState(365); match(EXTENDS);
				setState(366); ((IntfContext)_localctx).t = type();
				_localctx.c.addSuper(((IntfContext)_localctx).t.t);
				}
			}

			setState(371); match(LBRACE);
			setState(380);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==FUN) {
				{
				{
				setState(372); match(FUN);
				setState(373); ((IntfContext)_localctx).VAR = match(VAR);
				setState(374); ((IntfContext)_localctx).ts = typescheme();
				setState(375); ((IntfContext)_localctx).f = funBody();
				_localctx.c.add((((IntfContext)_localctx).VAR!=null?((IntfContext)_localctx).VAR.getText():null), ((IntfContext)_localctx).ts.ts, ((IntfContext)_localctx).f.body); 
				}
				}
				setState(382);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(383); match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClsContext extends ParserRuleContext {
		public CuClass c;
		public Token CLSINTF;
		public KindcontextContext pk;
		public TypecontextContext pt;
		public TypeContext t;
		public StatContext s;
		public ExprsContext es;
		public Token VAR;
		public TypeschemeContext ts;
		public FunBodyContext f;
		public ExprsContext exprs() {
			return getRuleContext(ExprsContext.class,0);
		}
		public TerminalNode VAR(int i) {
			return getToken(CubexParser2.VAR, i);
		}
		public TerminalNode LBRACE() { return getToken(CubexParser2.LBRACE, 0); }
		public TerminalNode SEMICOLON() { return getToken(CubexParser2.SEMICOLON, 0); }
		public TerminalNode SUPER() { return getToken(CubexParser2.SUPER, 0); }
		public List<TerminalNode> FUN() { return getTokens(CubexParser2.FUN); }
		public TerminalNode CLSINTF() { return getToken(CubexParser2.CLSINTF, 0); }
		public KindcontextContext kindcontext() {
			return getRuleContext(KindcontextContext.class,0);
		}
		public List<TypeschemeContext> typescheme() {
			return getRuleContexts(TypeschemeContext.class);
		}
		public TerminalNode RBRACE() { return getToken(CubexParser2.RBRACE, 0); }
		public TerminalNode LPAREN() { return getToken(CubexParser2.LPAREN, 0); }
		public List<FunBodyContext> funBody() {
			return getRuleContexts(FunBodyContext.class);
		}
		public TerminalNode CLASS() { return getToken(CubexParser2.CLASS, 0); }
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public FunBodyContext funBody(int i) {
			return getRuleContext(FunBodyContext.class,i);
		}
		public List<TerminalNode> VAR() { return getTokens(CubexParser2.VAR); }
		public TypecontextContext typecontext() {
			return getRuleContext(TypecontextContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(CubexParser2.RPAREN, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TypeschemeContext typescheme(int i) {
			return getRuleContext(TypeschemeContext.class,i);
		}
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public TerminalNode FUN(int i) {
			return getToken(CubexParser2.FUN, i);
		}
		public TerminalNode EXTENDS() { return getToken(CubexParser2.EXTENDS, 0); }
		public ClsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cls; }
	}

	public final ClsContext cls() throws RecognitionException {
		ClsContext _localctx = new ClsContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_cls);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(385); match(CLASS);
			setState(386); ((ClsContext)_localctx).CLSINTF = match(CLSINTF);
			setState(387); ((ClsContext)_localctx).pk = kindcontext();
			setState(388); ((ClsContext)_localctx).pt = typecontext();
			((ClsContext)_localctx).c =  new Cls((((ClsContext)_localctx).CLSINTF!=null?((ClsContext)_localctx).CLSINTF.getText():null), ((ClsContext)_localctx).pk.kc, (LinkedHashMap)(((ClsContext)_localctx).pt.tc)); 
			setState(394);
			_la = _input.LA(1);
			if (_la==EXTENDS) {
				{
				setState(390); match(EXTENDS);
				setState(391); ((ClsContext)_localctx).t = type();
				_localctx.c.addSuper(((ClsContext)_localctx).t.t);
				}
			}

			setState(396); match(LBRACE);
			setState(402);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << IF) | (1L << WHILE) | (1L << FOR) | (1L << RETURN) | (1L << VAR) | (1L << EQUAL) | (1L << LBRACE))) != 0)) {
				{
				{
				setState(397); ((ClsContext)_localctx).s = stat();
				_localctx.c.add(((ClsContext)_localctx).s.s);
				}
				}
				setState(404);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(412);
			_la = _input.LA(1);
			if (_la==SUPER) {
				{
				setState(405); match(SUPER);
				setState(406); match(LPAREN);
				setState(407); ((ClsContext)_localctx).es = exprs();
				setState(408); match(RPAREN);
				setState(409); match(SEMICOLON);
				_localctx.c.add(((ClsContext)_localctx).es.cu); 
				}
			}

			setState(422);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==FUN) {
				{
				{
				setState(414); match(FUN);
				setState(415); ((ClsContext)_localctx).VAR = match(VAR);
				setState(416); ((ClsContext)_localctx).ts = typescheme();
				setState(417); ((ClsContext)_localctx).f = funBody();
				_localctx.c.add((((ClsContext)_localctx).VAR!=null?((ClsContext)_localctx).VAR.getText():null), ((ClsContext)_localctx).ts.ts, ((ClsContext)_localctx).f.body);  
				}
				}
				setState(424);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(425); match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ProgramContext extends ParserRuleContext {
		public CuProgr p;
		public ProgrContext pr;
		public StatContext s;
		public ProgrContext progr(int i) {
			return getRuleContext(ProgrContext.class,i);
		}
		public List<ProgrContext> progr() {
			return getRuleContexts(ProgrContext.class);
		}
		public StatContext stat() {
			return getRuleContext(StatContext.class,0);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_program);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			((ProgramContext)_localctx).p =  new FullPrg(); 
			setState(433);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,34,_ctx);
			while ( _alt!=2 && _alt!=-1 ) {
				if ( _alt==1 ) {
					{
					{
					setState(428); ((ProgramContext)_localctx).pr = progr();
					_localctx.p.add_prg(((ProgramContext)_localctx).pr.p);
					}
					} 
				}
				setState(435);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,34,_ctx);
			}
			setState(436); ((ProgramContext)_localctx).s = stat();
			_localctx.p.add_lastStat(((ProgramContext)_localctx).s.s);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ProgrContext extends ParserRuleContext {
		public CuProgr p;
		public StatContext s;
		public VvContext v;
		public TypeschemeContext ts;
		public IntfContext i;
		public ClsContext c;
		public IntfContext intf() {
			return getRuleContext(IntfContext.class,0);
		}
		public ClsContext cls() {
			return getRuleContext(ClsContext.class,0);
		}
		public VvContext vv() {
			return getRuleContext(VvContext.class,0);
		}
		public TerminalNode FUN() { return getToken(CubexParser2.FUN, 0); }
		public TypeschemeContext typescheme() {
			return getRuleContext(TypeschemeContext.class,0);
		}
		public StatContext stat() {
			return getRuleContext(StatContext.class,0);
		}
		public ProgrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_progr; }
	}

	public final ProgrContext progr() throws RecognitionException {
		ProgrContext _localctx = new ProgrContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_progr);
		try {
			setState(454);
			switch (_input.LA(1)) {
			case IF:
			case WHILE:
			case FOR:
			case RETURN:
			case VAR:
			case EQUAL:
			case LBRACE:
				enterOuterAlt(_localctx, 1);
				{
				setState(439); ((ProgrContext)_localctx).s = stat();
				((ProgrContext)_localctx).p =  new StatPrg(((ProgrContext)_localctx).s.s); 
				}
				break;
			case FUN:
				enterOuterAlt(_localctx, 2);
				{
				setState(442); match(FUN);
				setState(443); ((ProgrContext)_localctx).v = vv();
				setState(444); ((ProgrContext)_localctx).ts = typescheme();
				setState(445); ((ProgrContext)_localctx).s = stat();
				 ((ProgrContext)_localctx).p =  new FunPrg(((ProgrContext)_localctx).v.v, ((ProgrContext)_localctx).ts.ts, ((ProgrContext)_localctx).s.s); 
				}
				break;
			case INTERFACE:
				enterOuterAlt(_localctx, 3);
				{
				setState(448); ((ProgrContext)_localctx).i = intf();
				((ProgrContext)_localctx).p =  new ClassPrg(((ProgrContext)_localctx).i.c);
				}
				break;
			case CLASS:
				enterOuterAlt(_localctx, 4);
				{
				setState(451); ((ProgrContext)_localctx).c = cls();
				((ProgrContext)_localctx).p =  new ClassPrg(((ProgrContext)_localctx).c.c); 
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 9: return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0: return 9 >= _localctx._p;

		case 1: return 8 >= _localctx._p;

		case 2: return 7 >= _localctx._p;

		case 3: return 5 >= _localctx._p;

		case 4: return 4 >= _localctx._p;

		case 5: return 3 >= _localctx._p;

		case 6: return 2 >= _localctx._p;

		case 7: return 1 >= _localctx._p;

		case 8: return 17 >= _localctx._p;

		case 9: return 6 >= _localctx._p;
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\uacf5\uee8c\u4f5d\u8b0d\u4a45\u78bd\u1b2f\u3378\3;\u01cb\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\3\2\3\2\3\2\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3"+
		"\4\7\4\66\n\4\f\4\16\49\13\4\5\4;\n\4\3\4\5\4>\n\4\3\5\3\5\3\5\3\5\3\5"+
		"\3\5\3\5\3\5\3\5\3\5\3\5\3\5\7\5L\n\5\f\5\16\5O\13\5\5\5Q\n\5\3\5\3\5"+
		"\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\7\6]\n\6\f\6\16\6`\13\6\5\6b\n\6\3\6"+
		"\5\6e\n\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7q\n\7\3\b\3\b\3\b"+
		"\3\b\3\b\3\b\3\b\3\b\3\b\6\b|\n\b\r\b\16\b}\5\b\u0080\n\b\3\t\3\t\3\t"+
		"\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\n\5\n\u008e\n\n\3\n\3\n\3\n\3\n\3\n"+
		"\3\n\3\n\3\n\5\n\u0098\n\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\5\n"+
		"\u00a4\n\n\5\n\u00a6\n\n\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\5\13\u00ba\n\13\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\5\13\u00d3\n\13\3\13\3\13\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\7\13\u0109\n\13\f\13\16\13\u010c\13\13"+
		"\3\f\3\f\3\f\3\f\3\f\3\f\3\f\7\f\u0115\n\f\f\f\16\f\u0118\13\f\5\f\u011a"+
		"\n\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\7\r\u0123\n\r\f\r\16\r\u0126\13\r\5\r"+
		"\u0128\n\r\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\5\16\u013f\n\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\16\5\16\u0156\n\16\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\7\17\u015e\n\17\f\17\16\17\u0161\13\17\5\17\u0163\n\17\3\20\3\20\3\20"+
		"\3\20\3\20\5\20\u016a\n\20\3\21\3\21\3\21\3\21\3\21\3\21\3\21\3\21\5\21"+
		"\u0174\n\21\3\21\3\21\3\21\3\21\3\21\3\21\3\21\7\21\u017d\n\21\f\21\16"+
		"\21\u0180\13\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22"+
		"\5\22\u018d\n\22\3\22\3\22\3\22\3\22\7\22\u0193\n\22\f\22\16\22\u0196"+
		"\13\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\5\22\u019f\n\22\3\22\3\22\3"+
		"\22\3\22\3\22\3\22\7\22\u01a7\n\22\f\22\16\22\u01aa\13\22\3\22\3\22\3"+
		"\23\3\23\3\23\3\23\7\23\u01b2\n\23\f\23\16\23\u01b5\13\23\3\23\3\23\3"+
		"\23\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3"+
		"\24\3\24\5\24\u01c9\n\24\3\24\2\25\2\4\6\b\n\f\16\20\22\24\26\30\32\34"+
		"\36 \"$&\2\n\4\2%%((\3\2!#\3\2$%\3\2-\60\4\2&\'\63\64\3\2\65\66\3\2\61"+
		"\62\4\2\t\t\32\32\u01f4\2(\3\2\2\2\4+\3\2\2\2\6.\3\2\2\2\b?\3\2\2\2\n"+
		"T\3\2\2\2\fp\3\2\2\2\16\177\3\2\2\2\20\u0081\3\2\2\2\22\u00a5\3\2\2\2"+
		"\24\u00d2\3\2\2\2\26\u010d\3\2\2\2\30\u011b\3\2\2\2\32\u0155\3\2\2\2\34"+
		"\u0157\3\2\2\2\36\u0169\3\2\2\2 \u016b\3\2\2\2\"\u0183\3\2\2\2$\u01ad"+
		"\3\2\2\2&\u01c8\3\2\2\2()\7\23\2\2)*\b\2\1\2*\3\3\2\2\2+,\7\25\2\2,-\b"+
		"\3\1\2-\5\3\2\2\2.=\b\4\1\2/:\7&\2\2\60\61\7\24\2\2\61\67\b\4\1\2\62\63"+
		"\7\35\2\2\63\64\7\24\2\2\64\66\b\4\1\2\65\62\3\2\2\2\669\3\2\2\2\67\65"+
		"\3\2\2\2\678\3\2\2\28;\3\2\2\29\67\3\2\2\2:\60\3\2\2\2:;\3\2\2\2;<\3\2"+
		"\2\2<>\7\'\2\2=/\3\2\2\2=>\3\2\2\2>\7\3\2\2\2?@\b\5\1\2@P\7\33\2\2AB\7"+
		"\25\2\2BC\7\31\2\2CD\5\16\b\2DM\b\5\1\2EF\7\35\2\2FG\7\25\2\2GH\7\31\2"+
		"\2HI\5\16\b\2IJ\b\5\1\2JL\3\2\2\2KE\3\2\2\2LO\3\2\2\2MK\3\2\2\2MN\3\2"+
		"\2\2NQ\3\2\2\2OM\3\2\2\2PA\3\2\2\2PQ\3\2\2\2QR\3\2\2\2RS\7\34\2\2S\t\3"+
		"\2\2\2Td\b\6\1\2Ua\7&\2\2VW\5\16\b\2W^\b\6\1\2XY\7\35\2\2YZ\5\16\b\2Z"+
		"[\b\6\1\2[]\3\2\2\2\\X\3\2\2\2]`\3\2\2\2^\\\3\2\2\2^_\3\2\2\2_b\3\2\2"+
		"\2`^\3\2\2\2aV\3\2\2\2ab\3\2\2\2bc\3\2\2\2ce\7\'\2\2dU\3\2\2\2de\3\2\2"+
		"\2e\13\3\2\2\2fg\7\24\2\2gq\b\7\1\2hi\7\17\2\2iq\b\7\1\2jk\7\20\2\2kq"+
		"\b\7\1\2lm\7\23\2\2mn\5\n\6\2no\b\7\1\2oq\3\2\2\2pf\3\2\2\2ph\3\2\2\2"+
		"pj\3\2\2\2pl\3\2\2\2q\r\3\2\2\2rs\5\f\7\2st\b\b\1\2t\u0080\3\2\2\2uv\5"+
		"\f\7\2v{\b\b\1\2wx\7)\2\2xy\5\f\7\2yz\b\b\1\2z|\3\2\2\2{w\3\2\2\2|}\3"+
		"\2\2\2}{\3\2\2\2}~\3\2\2\2~\u0080\3\2\2\2\177r\3\2\2\2\177u\3\2\2\2\u0080"+
		"\17\3\2\2\2\u0081\u0082\5\6\4\2\u0082\u0083\5\b\5\2\u0083\u0084\7\31\2"+
		"\2\u0084\u0085\5\16\b\2\u0085\u0086\b\t\1\2\u0086\21\3\2\2\2\u0087\u0088"+
		"\5\24\13\2\u0088\u008d\b\n\1\2\u0089\u008a\7\35\2\2\u008a\u008b\5\22\n"+
		"\2\u008b\u008c\b\n\1\2\u008c\u008e\3\2\2\2\u008d\u0089\3\2\2\2\u008d\u008e"+
		"\3\2\2\2\u008e\u00a6\3\2\2\2\u008f\u0090\7\4\2\2\u0090\u0091\7\33\2\2"+
		"\u0091\u0092\5\24\13\2\u0092\u0093\7\34\2\2\u0093\u0097\b\n\1\2\u0094"+
		"\u0095\5\22\n\2\u0095\u0096\b\n\1\2\u0096\u0098\3\2\2\2\u0097\u0094\3"+
		"\2\2\2\u0097\u0098\3\2\2\2\u0098\u00a6\3\2\2\2\u0099\u009a\7\7\2\2\u009a"+
		"\u009b\7\33\2\2\u009b\u009c\5\4\3\2\u009c\u009d\7\b\2\2\u009d\u009e\5"+
		"\24\13\2\u009e\u009f\7\34\2\2\u009f\u00a3\b\n\1\2\u00a0\u00a1\5\22\n\2"+
		"\u00a1\u00a2\b\n\1\2\u00a2\u00a4\3\2\2\2\u00a3\u00a0\3\2\2\2\u00a3\u00a4"+
		"\3\2\2\2\u00a4\u00a6\3\2\2\2\u00a5\u0087\3\2\2\2\u00a5\u008f\3\2\2\2\u00a5"+
		"\u0099\3\2\2\2\u00a6\23\3\2\2\2\u00a7\u00a8\b\13\1\2\u00a8\u00a9\t\2\2"+
		"\2\u00a9\u00aa\5\24\13\2\u00aa\u00ab\b\13\1\2\u00ab\u00d3\3\2\2\2\u00ac"+
		"\u00ad\7\33\2\2\u00ad\u00ae\5\24\13\2\u00ae\u00af\7\34\2\2\u00af\u00b0"+
		"\b\13\1\2\u00b0\u00d3\3\2\2\2\u00b1\u00b2\7\25\2\2\u00b2\u00b9\b\13\1"+
		"\2\u00b3\u00b4\5\n\6\2\u00b4\u00b5\7\33\2\2\u00b5\u00b6\5\30\r\2\u00b6"+
		"\u00b7\7\34\2\2\u00b7\u00b8\b\13\1\2\u00b8\u00ba\3\2\2\2\u00b9\u00b3\3"+
		"\2\2\2\u00b9\u00ba\3\2\2\2\u00ba\u00d3\3\2\2\2\u00bb\u00bc\7\23\2\2\u00bc"+
		"\u00bd\5\n\6\2\u00bd\u00be\7\33\2\2\u00be\u00bf\5\30\r\2\u00bf\u00c0\7"+
		"\34\2\2\u00c0\u00c1\b\13\1\2\u00c1\u00d3\3\2\2\2\u00c2\u00c3\7\21\2\2"+
		"\u00c3\u00d3\b\13\1\2\u00c4\u00c5\7\22\2\2\u00c5\u00d3\b\13\1\2\u00c6"+
		"\u00c7\7\26\2\2\u00c7\u00d3\b\13\1\2\u00c8\u00c9\7\3\2\2\u00c9\u00d3\b"+
		"\13\1\2\u00ca\u00cb\7\27\2\2\u00cb\u00cc\7\30\2\2\u00cc\u00d3\b\13\1\2"+
		"\u00cd\u00ce\7\27\2\2\u00ce\u00cf\5\22\n\2\u00cf\u00d0\7\30\2\2\u00d0"+
		"\u00d1\b\13\1\2\u00d1\u00d3\3\2\2\2\u00d2\u00a7\3\2\2\2\u00d2\u00ac\3"+
		"\2\2\2\u00d2\u00b1\3\2\2\2\u00d2\u00bb\3\2\2\2\u00d2\u00c2\3\2\2\2\u00d2"+
		"\u00c4\3\2\2\2\u00d2\u00c6\3\2\2\2\u00d2\u00c8\3\2\2\2\u00d2\u00ca\3\2"+
		"\2\2\u00d2\u00cd\3\2\2\2\u00d3\u010a\3\2\2\2\u00d4\u00d5\6\13\2\3\u00d5"+
		"\u00d6\t\3\2\2\u00d6\u00d7\5\24\13\2\u00d7\u00d8\b\13\1\2\u00d8\u0109"+
		"\3\2\2\2\u00d9\u00da\6\13\3\3\u00da\u00db\t\4\2\2\u00db\u00dc\5\24\13"+
		"\2\u00dc\u00dd\b\13\1\2\u00dd\u0109\3\2\2\2\u00de\u00df\6\13\4\3\u00df"+
		"\u00e0\t\5\2\2\u00e0\u00e1\5\24\13\2\u00e1\u00e2\b\13\1\2\u00e2\u0109"+
		"\3\2\2\2\u00e3\u00e4\6\13\5\3\u00e4\u00e5\t\6\2\2\u00e5\u00e6\5\24\13"+
		"\2\u00e6\u00e7\b\13\1\2\u00e7\u0109\3\2\2\2\u00e8\u00e9\6\13\6\3\u00e9"+
		"\u00ea\t\7\2\2\u00ea\u00eb\5\24\13\2\u00eb\u00ec\b\13\1\2\u00ec\u0109"+
		"\3\2\2\2\u00ed\u00ee\6\13\7\3\u00ee\u00ef\7)\2\2\u00ef\u00f0\5\24\13\2"+
		"\u00f0\u00f1\b\13\1\2\u00f1\u0109\3\2\2\2\u00f2\u00f3\6\13\b\3\u00f3\u00f4"+
		"\7*\2\2\u00f4\u00f5\5\24\13\2\u00f5\u00f6\b\13\1\2\u00f6\u0109\3\2\2\2"+
		"\u00f7\u00f8\6\13\t\3\u00f8\u00f9\7,\2\2\u00f9\u00fa\5\24\13\2\u00fa\u00fb"+
		"\b\13\1\2\u00fb\u0109\3\2\2\2\u00fc\u00fd\6\13\n\3\u00fd\u00fe\7+\2\2"+
		"\u00fe\u00ff\7\25\2\2\u00ff\u0100\5\n\6\2\u0100\u0101\7\33\2\2\u0101\u0102"+
		"\5\30\r\2\u0102\u0103\7\34\2\2\u0103\u0104\b\13\1\2\u0104\u0109\3\2\2"+
		"\2\u0105\u0106\6\13\13\3\u0106\u0107\t\b\2\2\u0107\u0109\b\13\1\2\u0108"+
		"\u00d4\3\2\2\2\u0108\u00d9\3\2\2\2\u0108\u00de\3\2\2\2\u0108\u00e3\3\2"+
		"\2\2\u0108\u00e8\3\2\2\2\u0108\u00ed\3\2\2\2\u0108\u00f2\3\2\2\2\u0108"+
		"\u00f7\3\2\2\2\u0108\u00fc\3\2\2\2\u0108\u0105\3\2\2\2\u0109\u010c\3\2"+
		"\2\2\u010a\u0108\3\2\2\2\u010a\u010b\3\2\2\2\u010b\25\3\2\2\2\u010c\u010a"+
		"\3\2\2\2\u010d\u010e\b\f\1\2\u010e\u010f\5\24\13\2\u010f\u0119\b\f\1\2"+
		"\u0110\u0111\7\35\2\2\u0111\u0112\5\24\13\2\u0112\u0113\b\f\1\2\u0113"+
		"\u0115\3\2\2\2\u0114\u0110\3\2\2\2\u0115\u0118\3\2\2\2\u0116\u0114\3\2"+
		"\2\2\u0116\u0117\3\2\2\2\u0117\u011a\3\2\2\2\u0118\u0116\3\2\2\2\u0119"+
		"\u0116\3\2\2\2\u0119\u011a\3\2\2\2\u011a\27\3\2\2\2\u011b\u0127\b\r\1"+
		"\2\u011c\u011d\5\24\13\2\u011d\u0124\b\r\1\2\u011e\u011f\7\35\2\2\u011f"+
		"\u0120\5\24\13\2\u0120\u0121\b\r\1\2\u0121\u0123\3\2\2\2\u0122\u011e\3"+
		"\2\2\2\u0123\u0126\3\2\2\2\u0124\u0122\3\2\2\2\u0124\u0125\3\2\2\2\u0125"+
		"\u0128\3\2\2\2\u0126\u0124\3\2\2\2\u0127\u011c\3\2\2\2\u0127\u0128\3\2"+
		"\2\2\u0128\31\3\2\2\2\u0129\u012a\7\37\2\2\u012a\u012b\5\34\17\2\u012b"+
		"\u012c\7 \2\2\u012c\u012d\b\16\1\2\u012d\u0156\3\2\2\2\u012e\u012f\5\4"+
		"\3\2\u012f\u0130\7\67\2\2\u0130\u0131\5\24\13\2\u0131\u0132\7\36\2\2\u0132"+
		"\u0133\b\16\1\2\u0133\u0156\3\2\2\2\u0134\u0135\7\4\2\2\u0135\u0136\7"+
		"\33\2\2\u0136\u0137\5\24\13\2\u0137\u0138\7\34\2\2\u0138\u0139\5\32\16"+
		"\2\u0139\u013e\b\16\1\2\u013a\u013b\7\5\2\2\u013b\u013c\5\32\16\2\u013c"+
		"\u013d\b\16\1\2\u013d\u013f\3\2\2\2\u013e\u013a\3\2\2\2\u013e\u013f\3"+
		"\2\2\2\u013f\u0156\3\2\2\2\u0140\u0141\7\6\2\2\u0141\u0142\7\33\2\2\u0142"+
		"\u0143\5\24\13\2\u0143\u0144\7\34\2\2\u0144\u0145\5\32\16\2\u0145\u0146"+
		"\b\16\1\2\u0146\u0156\3\2\2\2\u0147\u0148\7\7\2\2\u0148\u0149\7\33\2\2"+
		"\u0149\u014a\5\4\3\2\u014a\u014b\7\b\2\2\u014b\u014c\5\24\13\2\u014c\u014d"+
		"\7\34\2\2\u014d\u014e\5\32\16\2\u014e\u014f\b\16\1\2\u014f\u0156\3\2\2"+
		"\2\u0150\u0151\t\t\2\2\u0151\u0152\5\24\13\2\u0152\u0153\7\36\2\2\u0153"+
		"\u0154\b\16\1\2\u0154\u0156\3\2\2\2\u0155\u0129\3\2\2\2\u0155\u012e\3"+
		"\2\2\2\u0155\u0134\3\2\2\2\u0155\u0140\3\2\2\2\u0155\u0147\3\2\2\2\u0155"+
		"\u0150\3\2\2\2\u0156\33\3\2\2\2\u0157\u0162\b\17\1\2\u0158\u0159\5\32"+
		"\16\2\u0159\u015f\b\17\1\2\u015a\u015b\5\32\16\2\u015b\u015c\b\17\1\2"+
		"\u015c\u015e\3\2\2\2\u015d\u015a\3\2\2\2\u015e\u0161\3\2\2\2\u015f\u015d"+
		"\3\2\2\2\u015f\u0160\3\2\2\2\u0160\u0163\3\2\2\2\u0161\u015f\3\2\2\2\u0162"+
		"\u0158\3\2\2\2\u0162\u0163\3\2\2\2\u0163\35\3\2\2\2\u0164\u0165\7\36\2"+
		"\2\u0165\u016a\b\20\1\2\u0166\u0167\5\32\16\2\u0167\u0168\b\20\1\2\u0168"+
		"\u016a\3\2\2\2\u0169\u0164\3\2\2\2\u0169\u0166\3\2\2\2\u016a\37\3\2\2"+
		"\2\u016b\u016c\7\n\2\2\u016c\u016d\7\23\2\2\u016d\u016e\5\6\4\2\u016e"+
		"\u0173\b\21\1\2\u016f\u0170\7\13\2\2\u0170\u0171\5\16\b\2\u0171\u0172"+
		"\b\21\1\2\u0172\u0174\3\2\2\2\u0173\u016f\3\2\2\2\u0173\u0174\3\2\2\2"+
		"\u0174\u0175\3\2\2\2\u0175\u017e\7\37\2\2\u0176\u0177\7\f\2\2\u0177\u0178"+
		"\7\25\2\2\u0178\u0179\5\20\t\2\u0179\u017a\5\36\20\2\u017a\u017b\b\21"+
		"\1\2\u017b\u017d\3\2\2\2\u017c\u0176\3\2\2\2\u017d\u0180\3\2\2\2\u017e"+
		"\u017c\3\2\2\2\u017e\u017f\3\2\2\2\u017f\u0181\3\2\2\2\u0180\u017e\3\2"+
		"\2\2\u0181\u0182\7 \2\2\u0182!\3\2\2\2\u0183\u0184\7\r\2\2\u0184\u0185"+
		"\7\23\2\2\u0185\u0186\5\6\4\2\u0186\u0187\5\b\5\2\u0187\u018c\b\22\1\2"+
		"\u0188\u0189\7\13\2\2\u0189\u018a\5\16\b\2\u018a\u018b\b\22\1\2\u018b"+
		"\u018d\3\2\2\2\u018c\u0188\3\2\2\2\u018c\u018d\3\2\2\2\u018d\u018e\3\2"+
		"\2\2\u018e\u0194\7\37\2\2\u018f\u0190\5\32\16\2\u0190\u0191\b\22\1\2\u0191"+
		"\u0193\3\2\2\2\u0192\u018f\3\2\2\2\u0193\u0196\3\2\2\2\u0194\u0192\3\2"+
		"\2\2\u0194\u0195\3\2\2\2\u0195\u019e\3\2\2\2\u0196\u0194\3\2\2\2\u0197"+
		"\u0198\7\16\2\2\u0198\u0199\7\33\2\2\u0199\u019a\5\30\r\2\u019a\u019b"+
		"\7\34\2\2\u019b\u019c\7\36\2\2\u019c\u019d\b\22\1\2\u019d\u019f\3\2\2"+
		"\2\u019e\u0197\3\2\2\2\u019e\u019f\3\2\2\2\u019f\u01a8\3\2\2\2\u01a0\u01a1"+
		"\7\f\2\2\u01a1\u01a2\7\25\2\2\u01a2\u01a3\5\20\t\2\u01a3\u01a4\5\36\20"+
		"\2\u01a4\u01a5\b\22\1\2\u01a5\u01a7\3\2\2\2\u01a6\u01a0\3\2\2\2\u01a7"+
		"\u01aa\3\2\2\2\u01a8\u01a6\3\2\2\2\u01a8\u01a9\3\2\2\2\u01a9\u01ab\3\2"+
		"\2\2\u01aa\u01a8\3\2\2\2\u01ab\u01ac\7 \2\2\u01ac#\3\2\2\2\u01ad\u01b3"+
		"\b\23\1\2\u01ae\u01af\5&\24\2\u01af\u01b0\b\23\1\2\u01b0\u01b2\3\2\2\2"+
		"\u01b1\u01ae\3\2\2\2\u01b2\u01b5\3\2\2\2\u01b3\u01b1\3\2\2\2\u01b3\u01b4"+
		"\3\2\2\2\u01b4\u01b6\3\2\2\2\u01b5\u01b3\3\2\2\2\u01b6\u01b7\5\32\16\2"+
		"\u01b7\u01b8\b\23\1\2\u01b8%\3\2\2\2\u01b9\u01ba\5\32\16\2\u01ba\u01bb"+
		"\b\24\1\2\u01bb\u01c9\3\2\2\2\u01bc\u01bd\7\f\2\2\u01bd\u01be\5\4\3\2"+
		"\u01be\u01bf\5\20\t\2\u01bf\u01c0\5\32\16\2\u01c0\u01c1\b\24\1\2\u01c1"+
		"\u01c9\3\2\2\2\u01c2\u01c3\5 \21\2\u01c3\u01c4\b\24\1\2\u01c4\u01c9\3"+
		"\2\2\2\u01c5\u01c6\5\"\22\2\u01c6\u01c7\b\24\1\2\u01c7\u01c9\3\2\2\2\u01c8"+
		"\u01b9\3\2\2\2\u01c8\u01bc\3\2\2\2\u01c8\u01c2\3\2\2\2\u01c8\u01c5\3\2"+
		"\2\2\u01c9\'\3\2\2\2&\67:=MP^adp}\177\u008d\u0097\u00a3\u00a5\u00b9\u00d2"+
		"\u0108\u010a\u0116\u0119\u0124\u0127\u013e\u0155\u015f\u0162\u0169\u0173"+
		"\u017e\u018c\u0194\u019e\u01a8\u01b3\u01c8";
	public static final ATN _ATN =
		ATNSimulator.deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}