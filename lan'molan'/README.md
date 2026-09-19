업로드는 초기 제작으로부터 6개월 후다.


# lan'molan' a.k.a. lingua insaina (madlang)

형식언어에 'molan'이 있는, ENTP작성자가,
quod talis를 연발하는 언어가 웃겨보여서 만든거.

## format system

formatting ≜ ϝEncodeTable : codom EncodingTablize. (ϝt : SignituredTuple. (F(codom codom EncodeTable), {(a concat<card codom EncodeTable> "{" concat<card codom EncodeTable> numchrₙ concat<card codom EncodeTable> "}" concat<card codom EncodeTable> b, a concat<card codom EncodeTable>, tidx(n, t) concat<card EncodeTable> b) | n ∈ [0, first(t)) ∩ ℕ₀ ∧ (a, b ∈ F(codom codom EncodeTable))}) : MadGrammerCore) : 𝔉(SignituredTuple, MadGrammerCore)
escaping ≜ ϝEncodeTable : codom EncodingTablize. (F(codom EncodeTable), {(a concat<card codom EncodeTable> "\{" concat<card codom EncodeTable> numchrₙ concat<card codom EncodeTable> "\}" concat<card codom EncodeTable>, a concat<card codom EncodeTable> "{" concat<card codom EncodeTable> numchrₙ concat<card codom EncodeTable> "}" concat<card codom EncodeTable> b) | n ∈ ℕ₀ ∧ (a, b ∈ F(codom EncodeTable))}) : MadGrammerCore
FormalCommpile ≜ ϝ<G, s> : dom MadString. εv (∈G♡s ∖ {x | ∃y, (x, y) ∈ first(last²(MadGrammerize(G)))}) : F(first(G))
format ≜ ϝEncodeTable : ran EncodingTablize. (ϝ<s, t> : F(codom EncodingTable) × SignituredTuple. FormalCommpile(escaping(EncodeTable), FormalCommpile(formatting(EncodeTable)(t), s)) : F(codom EncodingTable)) : {f ∈ 𝔉(F(codom EncodingTable) × SignituredTuple, F(codom EncodingTable)) | f ∈ ran EncodingTablize}
FormalCommpile ≜ ϝ<G, s> : dom MadString. εv (∈G♡s ∖ {x | ∃y, (x, y) ∈ first(last²(MadGrammerize(G)))}) : F(first(G))
format ≜ ϝEncodeTable : ran EncodingTablize. (ϝ<s, t> : F(codom EncodingTable) × SignituredTuple. FormalCommpile(escaping(EncodeTable), FormalCommpile(formatting(EncodeTable)(t), s)) : F(codom EncodingTable)) : {f ∈ 𝔉(F(codom EncodingTable) × SignituredTuple, F(codom EncodingTable)) | f ∈ ran EncodingTablize}
subchrset(EncodingTable) ≜ SignituredTuple ∩ {(n, t) | n ∈ ℕ₀ ∧ t ∈ (codom EncodingTable)ⁿ}
optformatMaskRestrictor(t) ≜ $\begin{cases} ℕ⁰, &(first(t) = 0), \ last(t), &(first(t) = 1), \ last²(t) × optformatMaskRestrictor(last³(t)), &(first(t) > 1) \end{cases} $
optformatMask ≜ ϝEncodingTable : card codom EncodeTableize. ϝv : subchrset(EncodingTable). (ϝx : optformatMaskRestrictor(v). x : optformatMaskRestrictor(v)) : {f ∈ 𝔉(X, X) | X ∈ codom optformatMaskRestrictor}) : {f ∈ 𝔉(X, {f ∈ 𝔉(X, X) | X ∈ codom optformatMaskRestrictor}) | X ∈ codom subchrset}
optformatCore(EncodingTable)(v, x) ≜ (format(EncodingTable) ◦ (optformatMask(EncodingTable)(v)))(x)
domofoptformat(EncodingTable) ≜ {x | ∃y = optformatCore(EncodingTable)(x)}
codomofoptformat(EncodingTable) ≜ {optformatCore(x) | x ∈ domofoptformat(EncodingTable)}
oprformat ≜ ϝEncodingTable : codom EncodingTablize. (ϝx : domofoptformat(EncodingTable). optformatCore(x) : codomofoptformat(EncodingTable)) : {f ∈ 𝔉(domofoptformat(EncodingTable), codomofoptformat(EncodingTable)) | EncodingTable ∈ codom EncodingTablize}

## expe lan'molan'(Explanatio de lan'molan') : lan'molan' grammer

"ng"발음관련규칙이란? "g탈락 규칙"과 전후방 "-nge"규칙 및 "emolan' ng 규칙"을 통틀어서, "ng"발음관련규칙이라 분류하고, 이들을 "ng"발음관련규칙이라 부른다. lan'molan'식으로 일컽자면 Gabbreviation이다.

그중, "단어에 대한 ng 규칙"을 제외하면, "ng음운 규칙"이라 부른다. lan'molan'식으로 잍컽자면, GabbreviationNonGmoran이다.

Gŋ(f) ≜ {t | (t = (x, y) ∨ t = (y, x) ∨ t = (x, z) ∨ t = (z, x) ∨ t = (y, z) ∨ t = (z, y)) ∧ x = domofoptformat(f)(<F(codom f), F(codom f)>, "{0}n'{1}", <a, b>) ∧ y = domofoptformat(f)(<F(codom f), F(codom f)>, "{0}ng{1}", <a, b>) ∧ z = domofoptformat(f)(<F(codom f), F(codom f)>, "{0}ŋ{1}", <a, b>) ∧ (a, b ∈ F(codom f))}

Gŋ는 요컨데, "ŋ = ng = n'"를 보장하는 문법이다. "g탈락 규칙"이라고도 한다.

defintion. space = " " = "\s"

Gŋe(f) ≜ {t | (t = (x, y) ∨ t = (y, x) ∨ t = (x, z) ∨ t = (z, x) ∨ t = (y, z) ∨ t = (z, y)) ∧ x = domofoptformat(f)(<F(codom f), F(codom f)>, "{0}ŋe{2}{1}", <a, b, space>) ∧ y = domofoptformat(f)(<F(codom f), F(codom f)>, "{0}ŋë{2}{1}", <a, b, space>) ∧ z = domofoptformat(f)(<F(codom f), F(codom f)>, "{0}ŋ{2}{1}", <a, b, space>) ∧ (a, b ∈ F(codom f))}

Gŋe는 요컨데, 어미 "-ŋe"에서 마지막 글자 'e'를 생략할수 있는 규칙이다. 에초에 어미 "-ŋe"에 한정해서, 마지막 "e"는 "ë"로 발음한다. 구어체에서, "ŋ"다음에 e가 나오면 "ge"발음도 하는게 정석이다ㅡ 그래서, "ŋe"는 "-ng"이후에도 "ge"로 발음되는데, 제작자가 "그냥 어짜피 이 규칙이 실현되도 크게 언어의 지형이 바뀌지 않네?"해서 채택한거다. (언어학자가 아니므로, 이 선택이 악수였는지 신의 한수인진 모르는 일이다.) 그래서... 이건, "-nge"규칙이라고도 부른다. 또한, "-nge"를 연음결합규칙(Liaison Resyllabification Rule)과 구별하여, 전방 "-nge"규칙이라 한다.

Gŋee(f) ≜ {t | (t = (x, y) ∨ t = (y, x)) ∧ x = optformat(<F(codom f), F(codom f), F(codom f)>, "{0}ŋe{2}e{1}", <a, b, space>) ∧ y = optformat(<F(codom f), F(codom f), F(codom f)>, "{0}ŋë{1}", <a, b, space>) ∧ (a, b ∈ F(codom f))}

Gŋee는 요컨데, 어미 "-ŋe"가 어미인 단어 뒤에 오는 단어의 첫글자가 'e'면, 그 'e'를 생략할수 있는 규칙이다. 이를 연음결합규칙(Liaison Resyllabification Rule)이라 한다. 대신에, 결합된 단어는 끊어읽어야 하므로, "ë"가 된다. (참고 : 위에 점 두개 찍힌 다이어크라틱은 띄어읽는것임.) 또한, 후방 "-nge"규칙이라고도 한다.

전방 "-nge"규칙과 후방 "-nge"규칙을 통틀어서, 전후방 "-nge"규칙이라고 분류한다.

Gmoran(f) ≜ {(optformat(<F(codom f), F(codom f), F(codom f)>, "{0}{2}emolan'{2}{1}", <a, b, space>), optformat(<F(codom f), F(codom f), F(codom f)>, "{0}{2}molan'{2}{1}", <a, b, space>)) | a, b ∈ F(codom f)}

Gmoran은 요컨데, 단어 "emoran'"을 "molan'"로 취급 가능하게 해주는 규칙이다. 이는 "emolan'규칙"혹은, "emolan' ng 규칙"이라고도 부른다.

"ng"발음관련규칙중에서, "emolan' ng 규칙"은, "단어에 대한 ng규칙"이라 분류한다.

Gsupo(f) ≜ {(optformat(<F(codom f), F(codom f), F(codom f)>, "{0}{2}subo{2}sute{2}sata{2}{1}", <a, b, space>), optformat(<F(codom f), F(codom f), F(codom f)>, "{0}{2}sup'o{1}", <a, b, space>)) | a, b ∈ F(codom f)}

Gsupo는 "주격접두조사규칙"이라 부른다. "sup'o-"를 "주격접두조사"라는 문법으로 본거다.

다만, lan'molan'은 교착어도 굴절어도 아닌 인공어이에, 교착어의 "접두조사" • "접미조사"처럼, 독립된 어절로 존재하지 않는 형태소의 단어를 문법사로써 지정하지 않는 대신에, "조사규칙"이라고, 조사를 "문법 규칙"으로 취급한다. 즉, "접두조사" • "접미조사"를 문법 규칙으로 만든 형식으로만 오로지 굴절규칙이 허용된다. (굴절규칙의 교착호환 원칙)

그래서, 어떤 대상을 서술하는 어절을 주격으로 굴절시키는 규칙이 "주격접두조사규칙"이다.

물론 격이라는 문법이 있는게 아니다. 다른 굴절어로 치면 격에 해당해서 그렇게 부르는거지, 서술어를, 주어로 바꾸면, "서술격에서 주격으로 바꿨다."라고 표현하는거다.

Gsatpo(f) ≜ {(optformat(<F(codom f), F(codom f), F(codom f)>, "{0}{2}sata{2}{1}", <a, b, space>), optformat(<F(codom f), F(codom f), F(codom f)>, "{0}{2}satp'o{1}", <a, b, space>)) | a, b ∈ F(codom f)}

Gsatpo란 "수식어격접두조사규칙"라 부르며, "수식어접두조사"를 "수식어화자"라고도 하기에, "수식어회자문법규칙"이나 "수식어화규칙"이라고도 부른다. "수식어접두조사", 즉 "수식어화자"는 Qualifierizer라 부르며, Qualifierizer가 접두 조사로 붙은 단어를 "수식어"라고 부른다.

다만, lan'molan'은 교착어도 굴절어도 아닌 인공어이에, 교착어의 "접두조사" • "접미조사"처럼, 독립된 어절로 존재하지 않는 형태소의 단어를 문법사로써 지정하지 않는 대신에, "조사규칙"이라고, 조사를 "문법 규칙"으로 취급한다. 즉, "접두조사" • "접미조사"를 문법 규칙으로 만든 형식으로만 오로지 굴절규칙이 허용된다. (굴절규칙의 교착호환 원칙)

그래서, 어떤 대상을 서술하는 어절을 수식어격으로 굴절시키는 규칙이 "수식어결접두조사규칙"이다.

물론 격이라는 문법이 있는게 아니다. 다른 언어에 수식어격이 없는것도 그렇고, 여기의 수식어는, 형식언어적 후치수식어, 즉, "x sat'po-y"는 사실상 "x s.t. y"로 생각되는 "x인데, 논리식을 수반하는 형태"란것으로, 에초에, 이것도 "주격뭐시기 규칙"가 그랬던것마냥, "서술어가 후치수식어로 바꿨다."는걸 "서술어격이 후치수식어격으로 바궜다"라 표현한거다.

GabbreviationNonGmoran(f) ≜ Gŋ(f) ∪ Gŋe(f) ∪ Gŋee(f)
Gabbreviation(f) ≜ GabbreviationNonGmoran(f) ∪ Gmoran(f)
GcasusSyntax(f) ≜ Gsupo(t) ∪ Gsatpo(t)

...작성중... (아직 모든 문법을 옮겨적지 못함. 이건 오프라인 문서가 존재.)

## lan'molan' - lingua latina - english Lexicon

⚤ : Genus neutrum
♀ : Genus femininum
♂ : Genus masculinum
ll"…" : LinguaLatina"…" : LinguaLatina♡"…"
lm"…" : LanMoran"…" : LanMoran♡"…"
locu : Locutio
rel : Relational Noun (lan'molan' 문법에서, NP Complementation가 되는게 유일하게 허락된 명사. Relational Noun는 conj type과 noun type이 문법적으로 엄격하게 나뉘어있음)
♯ : lingua latina 번역본 기의와 의미론적 동등성 보장. (by translation introduce definition) (n.b. 영단어중에서도, 라틴어 표현에서 수입한, 고급용어•전문용어의 경우에는 여기에 해당한다.)
♭ : english 번역본 기의와 의미론 동등성 보장. (by translation introduce definition) (n.b. 라틴어 단어중에서도, 영어단어에서 수입한, 전문용어 번역어의 경우는 이거에 해당한다.)
Pluralize : 복수형으로 만들어주는 함수로, 단수형이랑 의미상의 차이는 없지만, 복수형의 경우, 영어나 라틴어에서 정의되지 않고, 오로지 lan'molan'에만 정의됬다면, 이걸로 일단 복수화한 후, 문법적 사용은 나중으로 미룬다.
aux : auxiliary verb

lan'molan' - lingua latina - english Lexicon
1. lm"ate", conj. ⚤, ♯ : ll"at", conj. coord. advers. : en"at", conj.
2. lm"~ cone ~", conj, ⚤, ♯ : ll"~. satisfacit id sequentur, satisfacis ~", <Locuio Non Verbum> : en"satisfying id est, consequenceses, satisfying", <Locuio Non Verbum> (n.b. "satisfying id est, consequenceses, satisfying"는, 영어는 중간에 라틴어를 껴넣어도 대충 때우는 언어라 됨. 난 잘난척쟁이가 아님. 영어 어휘가 부족했을 뿐.)
3. lm"defe", conj. ⚤, ♯ : ll"hoc est quod", <Locuio Non Verbum> : en"it is which" • en"it is which", <Locuio Non Verbum> ♯
4. lm"emo", rel. ♂ ♭ : 하단 설명 참고.
5. lm"emolange", noun : 이건 emolange문단 참고.
6. lm"est", conj. ♯ : ll"est", v. 3. sg. pres. ind. act. : en"is", be-v. sg. (tip : 도입 이유는 설명 침고)
7. lm"expe", rel. ⚤, ♯ : "explanatio", -onis, f. : "explanation", n.
8. lm"foma", aux, ♀, ♯ : ll"formalis" ♭, en"formal" (formal language에서 formal). 이 부분은 굳이 설명하지 않는다. 이건 10번 용례로만 쓰이기 때문.
9. lm"lange", rel. ⚤, ♯ : ll"lingua", -ae, f. : en"language" n.
10. lm"lange foma" : ll"lingua formalis" : en"formal language" (ㄹㅇ 구체적인 일반명사.) N.B. 근데, lange foma는 rel이다. 즉, 다른 명사 앞에 쓰이면, 그 뒤에 나오는 고유명사의 주사(Subiectum)범주가 되는 rel이다. 이건 "defa의 범위"라는 문단 참고.
11. lm"lan'molan'", noun : 이건 하단 설명 참고
12. lm"neco", prep. sg. ♂, ♯ : ll"nec (neque)", conj. coord. neg. : en"nor(라틴어 nec의 번역어로써의 한정)" n.b. neco라는 단어는 necos의 n.b.에서 말하듯, necos와 연관이 있다. 또한, 이 언어의 유일한 전치사인 만큼, 특수한 문법의 형태로만 쓰인다. 그 구문론적 특성에 대해선, "단어들의 사용에 대한 문법적 제약" 문단 참고. 그 부분에 neco의 사용이 적혀있다.
13. lm"necos", prep. sg. ♂, ♯ : Pluralize(lm"neco" , prep. sg. ♂) n.b. 이거가 어떻게 쓰이는지는 neco의 n.b.에 적힌 바가 중요하다, 거기서 말하듯, necos의 본질은, neco랑 같이 쓰는거에 있다.
12. lm"sata", conj. sg. ♀, ♯ : ll"satisfacit", v. 3. sg. pres. ind. act. : en"satisfy", vt. sg. ♯
13. lm"satas", conj. pl. ♀, ♯ : ll"satisfaciunt", v. 3. pl. pres. ind. act. : en"satisfies", vt. pl. ♯
14. lm"subo", rel. sg. ♂, ♯ : ll"subiectum", -ī, n. : en"underlying subject",  <Terminus Technicus> ♯
15. lm"subos", rel. pl. ♂, ♯ : ll"subiecta", n. pl. nom./acc : en"underlying subjects",  <Terminus Technicus> ♯
16. lm"supe", rel. ⚤, ♯ : ll"superlingua", <Terminus Technicus> ♭ : en"overlange", <Terminus Technicus> (n.b. 이 전문용어가 가르키는게 무엇인지는 overlange문단 참고)
17. lm"sute", conj. sg. ⚤, ♯ : ll"quod talis",  <Locuio Non Verbum> : en"s.t.(such that)" • en"such as",  <Locuio Non Verbum>
18. lm"sutes", conj. pl. ⚤ : Pluralize(lm"sute", conj. sg. ⚤)
19. lm"texte", rel. sg. ⚤, ♯ : ll"scriptus" part. perf. pass. / adj. : en"text", noun.

emo의 뜻.
1. Easy Ver (진짜 정의가 어려우니 쉬운 ver) : ll"affectus", -us, m. : en"emotion", n.
2. Actually (진짜 정의) : ll"affectus in superlingua", <Locuio Non Verbum> , <Terminus Technicus> ♭ : en"emotion in overlange", <Locuio Non Verbum> , <Terminus Technicus>

lan'molan'(lange emolange)의 뜻
1. 뜻풀이 : sup'olange sute satp'oemolange (lingua quod talis, satisfacit "emolange", 빈사 emolange를 민족하는 언어, 즉, emolange 언어)
2. 찐 뜻 : 걍, 이 언어 그 자체를 칭하는거다. 궁극의 자기지시.
3. 번역 : ll"lingua insaina", <Locuio Non Verbum> : en"mad langauge(mad lang • madlang)", <Locuio Non Verbum>

Tip : 단어 이해를 위한 5가지 method를 통한 이해

(스킵하고 읽고자 한다면, `(end of tip. additional written volumes at 26sep13sun)`으로 가시오.)

Gabbreviation(ng발음관련규칙) : GabbreviationNonGmoran 및 Gmoran
 - GabbreviationNonGmoran(ng음운 규칙) : "g탈락 규칙"과 전후방 "-nge"규칙
   + Gŋ(g탈락 규칙) : 
     * 모델론적 Gŋ : 기호 ŋ은 ng를 뜻한다.
     * 문법적 Gŋ : 발음 /ng/와 발음 /n'/둘다 lan-molan ng발음이고 (음운적 Gŋ, 발음모호규칙), ŋ와 n'는 구문론적으로 구분 없는 모호성이 있다. (구문적 Gŋ, 구문모호규칙)
   + Gŋe(전방 "-nge"규칙) : 
     * Gŋe 트래마 : ŋë = ŋe다. /ŋge/도 되고, /n'ge/도 된다. 심지어, ŋë에서 생략해서 ŋ̈도 된다.
     * Gŋe 추가문법 : nge는 ng로 바꿔도 된다.
   + Gŋee(Liaison Resyllabification Rule, 후방 "-nge"규칙) : `-ŋe e-`를 `-ŋë`로 읽는, `ŋ̈e`식으로 읽는 규칙이다.
 - 단어에 대한 ng규칙
   + Gmoran(emolan'규칙, emolan' ng 규칙) : /emolan'/은 /molan'/으로 취급해도 된다.

GcasusSyntax
 - Gsupo (주격접두조사규칙) : /sup'o~/는 /subo sute sata ~/다.
 - Gsatpo (수식어격접두조사규칙, 수식어화자문법규칙, 수식어화규칙, Qualifierizering Rule) : /satp'o-~/는 /sata ~/다.
 - Gsutpo : /sutpo-/는 /sute sata ~/다.

Tip1. 위의 명칭들을 단순하게 이르는 말
교재식 설명 - engma표기 : ng를 ŋ로 적어도 동일한 뜻으로 간주해준다. 즉, ŋ를 ng로 정의한다. (이건 어디까지나 교재용 설명이고, 실상은 Gŋ다.)
교재식 설명 - 구개음화발 동화(Palatalization Based Consonant Assimilation) : ŋ로 끝나는 단어는 n'로 끝나는 단어와 동일 단어 취급하고, 어말 형태만 다른거다. (Gŋ의 대표적 예시. 교재가 Gŋ을 완벽히 설명하는 예.)
교재식 설명 - 어말 모음 탈락(Apocope) : ŋe로 끝나는 단어는 ŋë나 ŋ̈로 끝나는 단어와 동일 단어 취급한다. 어말 형태만 다른거다. (Gŋe의 대표적 예시. 교재가 Gŋe를 완벽히 설명하는 예.)
교재식 설명 - moran의 관용적 표기 : emorange은 관용적으로 emoran', 'moran'이라고 적어도 된다. (이건 어디까지나 교재용 설명이고, 실제는 관용이 아니라 정식 문법인 Gmoran이다.)
주격규칙 : /sup'o~/는 /subo sute sata ~/다. 주격인 어휘는 sup'o- 접두사로 시작하는것이다.
satpo어절(things that 어절) : /satp'o-~/는 /sata ~/다. satp'o란 접두사로 시작하는 어절은 that절처럼 다루는거다. 그러나 things that이다.
sutpo어절(verb that 어절) : /sutpo-/는 /sute sata ~/다. sutpo란 접두사로 시작하는 어절은 that절처럼 다루는거다. 그러나 verb that이다.

Tip2. 어휘 분류노트 - 어휘의 종류에 따른 분류

접속사 : ate ⚤, cone ⚤, defe ⚤, est, sata ♀, satas ♀
관계명사 : emo ♂, expe ⚤, lange ⚤, subo ♂, subos ♂, supe ⚤, sute ⚤, sutes ⚤, texte ⚤
명사 : lan'molan'
전치사 : neco ♂, necos, ♂
특수 용례의 조동사 : foma ♀
특수한 관계명사와 명사 사이 : lange foma

Tip 3. 어휘 분류노트 - 문법적 성에 따른 분류

n.b. 별점은 난이도다.

word[motive] • word<sg>

⚤
conj. ate[at, ★★☆, ??], cone[con-s**equen**se, ★★★], defe[def ★★☆, ≈?]
rel. expe[exp-l"ə"nation], lange[lang-uage a.k.a. lang"e"], supe[sup-"e"rlinuga], sute[s(uch) t-h"ə"t a.k.a. s.t.], sutes<sute + s>, texte[text]

♂
rel. emo[em-"o"tion], subo[sub-iectum ★☆☆, ^^], subos<subo>
prep. neco[nec, nec ≈ neco], necos<neco>

♀
conj. sata[sat-isfacio, sat ≈ sata], satas<sata>
aux. foma[fo(r)m-"a"l]

etc.
conj. est[est]
n. lan'molan'<lange emolange>, emolange<ego & lange>, lange foma<lange foma>

Tip 4. 어휘 분류노트 - 거의 문법적인 용도•예약어(coding keyword)적 용도로 쓰이는 어휘

sata / sates : 이 언어 자체가 such that (s.t.)로 대상을 서술하는 확정기술어구지옥이라서 (러셀이 보면 이 언어를 가지고 지시체 이론을 서술할수 있다 좋아하겠지만, 나는 비트겐슈타인처럼 언어의 의미는 사용에 있다 보기에, 확정 기술어구 이론을 믿지 않는다. 다만, 이 언어는 문장 구성성분이 술어와 주어만 놔놓고, 확정 기술어구로 그 두가지를 만드는 식의 언어라, 확정기술어구로 뜻을 구성하는 작문을 한다.) 한마디로, quod-tails문
sute/sutes : "sutpo-"와 같은 용도거나, 문장을 술어로 변환하는 용도로 defe에서 concept문 마냥 쓰거나, lambda함수를 통한 술어마냥 쓸수 있다. 한마디로 빈사화 전치사문.
subo/subos : sute가 문장을 빈사화하는 "sutpo"라면, subo는 빈사를 주사화하는 "sup'o"다. 한마디로 주사화 전치사문.
lange / lange foma : 언어를 정의하거나, 표준 언어 지시 코드나 언어명으로 언어를 지칭하거나, 언어명에 defe를 통해, 언어 내용을 lan'molna'으로 작성된 defe문들이 담긴 scriptus로 정의하여 언어를 선언하는 등, 프로그래밍하듯, 언어를 정의하고 사용하는 용도로 쓰인다.
texte / expe : texte "□"나 texte □는 scriptus "□"란 뜻으로, expe "□"나 expe □는 explanatio "□"란 뜻으로 쓰는게 대부분이다. 물론 texte를 scriptus로, expe를 explanatio란 의미로, 그냥 명사로 활용해도 된다. 굳이 의존명사로 쓸 필요는 없다만. 의존명사를 통한 구문으로 활용할 목적으로 만들어졌기에, 사용은 목적이 얽메이지 자유이기에 무조건 구문으로 쓸 필요 없다는 점 다시 한번 강조하겠다.
foma : lange foma로 쓰지 않고, 원래 용도로 써도 되지만, 원래 용도로 안 쓸 목적으로 만들어진, texte / expe같은 놈이다.

Tip 5. 어휘 분류노트 - 문법사 역할을 하기보다는 걍 프로그래밍이나 논리식이란 코드를 짜는 코딩에 가까운것
defe : 라틴어로 번역시 "hoc est quod"구. 그냥 정의문을 작성하는 구문이라...
cone : 모델(명제나 술어 혹은 모델집합과 명제들의 집합을 만족시키는 대상)집합 사이의 포함관계인 "satisfacit id sequentur, satisfacis"라서, 걍 에초부터 논리적 귀결관계를 의미한다. 확정 기술어구 지옥에서 아마도 가장 많이 쓰일법도 한게, 오르가논적 직관인 "보편자 간의 포섭 (Inclusion)"을 통한 확정 기술어구에서 양화논리적 문장의 작문은 사실상 이항관계 ∀혹은 Inclusion의 역할을 하는 cone나 등호 역할을 하는 est를 통해 기술할수밖에 없기 때문이다.
neco / necos : 명제논리식을 적고싶다면, 라틴어 NEC (=NOR)의 의미인 necos를 쓰면 된다... 당연히 cone처럼 ㅈㄴ 많이 쓰일수밖에.

(end of tip. additional written volumes at 26sep13sun)

## 이후에 설명하는 문단도, 아직 모든 정의와 설명을 옮겨적지 못함. 이건 오프라인 문서가 존재.

... 작성중 ...

## PIE의 어휘와 APIE

PIE는 라틴어처럼 SOV어순이나 어순이 자유롭다. (목적어나 동사를 강조해야하면 어순을 바꾼다.)

부정표현)
1. adv form. *né [/né/][네↗]
2. prefix form. *n̥- [/n̩/][종성 n]

연언표현)
1. enclitic / sufix form. *-kʷé [/kʷé/]
2. adv / prep form. *h₂énti [가설에 따라 /xǽnti/나 /ʕǽnti/독일서식 x일지 아랍어식 ʕ일지][핸-티 / 엔-티]

전칭표현)
1. 단수 주격 *h₃épnis [/h₃ép.nis/] (모든 단수 존재가)
2. 단수 대격 *h₃épnim [/h₃ép.nim/] (모든 단수 존재를)
3. 복수 주격/대격 *h₃épnees [/h₃ép.ne.es/] (모든 이들이 / 모든 이들을)
4. 복수 여격/탈격 *h₃épnibhsh₂ [/h₃ép.ni.bʰs.h₂/] (모든 이들에게 / 모든 이들로부터)
5. 단수 주격/대격 *h₃épni [/h₃ép.ni/] (모든것이 / 모든것을) (Everything)
6. 복수 주격/대격 *h₃épneeh₂ [/h₃ép.ne.e.h₂/] (모든것들이 / 모든 것들을) (All things)
7. h₃ep-ni-계열은 : "전체"의 의미로 *h₃ep- ((힘, 풍요, 재산) / (수확물이 가득 참 / 풍요로움))어원을 가진다. 아리스토텔레스의 범주론적시각이 타당한 이유는, 원래 단어 "전체"는 꽉 차있다는 뜻을 함축적 의미로 가진다.

계사)
1. *h₁ésti [/'es-ti/] : is이지만, O.C.자리의 값이 술어가 언질하는 대상이여도 된다.

관계대명사 ; 의문/부정대명사 어근 *kʷó-)
1. *kʷód : quod, what의 의미

관계대명사 ; 관계대명사 어근 *yó-)
1. *yód : "s.t."같은 역할

분사어미 / 중성명사화
1. *-nt- (현재 능동 분사 어미) (영어 -ing, 라틴어 -nt-, 독일어 -nd유래)
2. *-mh₁no- (수동/중동)
3. 중성 복수격(Neuter Plural) 집합명사화 어미 *-h₂
4. *-onh₂ / *-ntia : *-nt-와 *-h₂가 사용되어 최종적으로 굴절한 form
5. 구체적인 굴절 양상은 아래에 표시한다.

1. 분사 어간 (Participle Stem): *-ent- 또는 *-ont- 또는 *-nt-에 ​중성 복수 어미 (Neuter Plural Ending): *-h₂를 붙일 준비를 하자.
2. 결합을 결정하는 핵심 문법 규칙: 능동형태론 (Acrostatic / Amphikinetic)에 따라, 두가지 규칙(패러다임)으로 결정
2. 1. 규칙 A: 테마틱 동사 (Thematic Verbs) 규칙 ; 동사 어근과 어미 사이에 매개 모음(Thematic vowel, *-o- / *-e-)이 들어가는 동사들의 경우
2. 1. 1. 기본 결합:  *-ont-h₂ / *-ent-h₂
2. 2. 규칙 B: 아테마틱 동사 (Athematic Verbs) 규칙 ; 0등급(Zero-grade)화
2. 2. 1. *-ent-는 모음이 증발하는 0등급(Zero-grade) 상태가 되어 ***-n̥t-**가 됨. (매개 모음 없이 어근에 분사 어미가 바로 붙는 고대 동사들의 경우, 중성 복수 격어미(*-h₂)가 붙으면 성조가 문장 맨 앞으로 도망치거나(Acrostatic) 어미 쪽으로 이동)
2. 2. 1. 1. 기본 결합: *-n̥t- (모음이 빠진 분사) + *-h₂ (중성 복수)
2. 2. 1. 2. 충돌 형태: **``*-n̥t-h₂**
2. 3. 결과적으로, 다음과 같음.
2. 3. 1. 동적/강세 형태 (Full-grade): 성조가 분사 어미에 올 때 → *-ónt-h₂
2. 3. 2. 정적/약세 형태 (Zero-grade): 성조가 어근으로 도망칠 때 → *-n̥t-h₂
2. 4. 참고로 성조 이동 규칙은 존나 어렵다.

## 변형 PIE (Altered PIE)

lan'molan'은 영어와 라틴어에서 유래되었는데, 에초에 lan'molan'개발자는 형식논리 기호들을, 표상화하여 가지고 있었고, 해당 사적 어격의 "직관"에서 탄생한 언어가 바로 lan'molan'임. 물론, 그 직관을 표기하기 위한 용도이나, 일부러 의미 자체는 라틴어와 영어를 통하여 형식적인 정의 그대로 사용함.

그런데, lan'molan'개발자가 PIE를 학습하던 중, 자신의 사적 어격으로 PIE를 번역해서 이해하는 상황이 발생함.

그래서, 변형 PIE가 뭐냐면, 문법규칙을 좀 수정하고, 형식적 규칙을 추가하고, PIE에서 어휘 몇게 추려서 만든 lan'molan'해설용 인공어임.

개인적으로, lan'molan'을 개발했다지만, APIE가 훨씬 예쁜 인공어-형식어 혼합체인것 같음.

lan'molan'구상에 1시간밖에 안걸렸고, APIE도 그럼. 물론 정리문서를 전산화하는건, 꽤 오래걸려서, 전산화 시작한지 1달 후, PIE를 입문했고, 그게 지금인데, 지금도 정리 못했음

물론 APIE큰 PIE에서 주사/빈사라는 새로운 문법적 요소를 추가했을 뿐, PIE기반이고, lan'molan'은 완전히 라틴어/영어 기반임.

...작성중... (아직 모든 문법을 옮겨적지 못함. 이건 오프라인 문서가 존재.)

## 실체 : lan'molan'은 언어창작용 FW다. 메타적 용도인거다.

당신이 이 언어가 찐따의 자작언어라고 비판할수 있다.

맞다. 나는 찐따고 이건 찐따의 자작언어다. 근데 나는 스스로 찐따인걸 즐기는 정신병자고, 이 자작언어는 꽤 재밌으니까, 상관 없다.

완전히 한국어나 영어만큼의 표현이 가능하고, 심지어 "scriptus kill ate lange en"같은 표현으로 언어코드 en에서 글덩어리(개행이 존재 가능) kill을 가져오는 식으로, 거의 모든 언어에 엑세스 가능하니, 문법요소만 lan'molan'안에서 완결되고, 단어는 외국어 수입을 시스템화하는식으로 동작한다.

그래서, "한국어같은 정상언어에서 할수있는말을 못하니 찐따 어린이의 자작언어는 언어가 아니다."는 반박을 들이대기엔, 이미 저 언어가 한국어나 라틴어의 표현력을 넘어간다.

이 언어를 단순히 착상으로 취급하지 말고, 한번 재미있는 퍼즐로 접근해보길 바란다. lan'molan'은 실은, 언어 창작의 재미를 느낄수 있도록 한 언어 창작 Framework다. 언어라기엔 따로 언어를 defe하기 때문이다.