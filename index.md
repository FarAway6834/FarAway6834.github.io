---
layout: default
title: 파레 로그 - 메인
---

# 파래 로그

라율펜 파래 가인 잡담 블로그로

실상은 수학이랑 생각만 하는거

우히히

## posts

{% for post in site.posts %}
  <div>
    <h3><a href="{{ post.url }}">{{ post.title }}</a></h3>
    <p>{{ post.date | date: "%Y as year %m as mounth %d as day" }}</p>
    <p>{{ post.description }}</p>
  </div>
{% endfor %}
